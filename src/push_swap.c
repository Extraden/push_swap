/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:46:05 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 17:46:45 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static t_result	has_no_duplicates(t_stack *stack)
{
	size_t	i;
	size_t	j;
	int		first_num;
	int		second_num;

	i = 0;
	while (i < stack->length - 1)
	{
		first_num = stack->nums[i];
		j = i + 1;
		while (j < stack->length)
		{
			second_num = stack->nums[j];
			if (first_num == second_num)
				return (FAILURE);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

static t_result	stack_destroy(t_stack *stack)
{
	free(stack->nums);
	return (SUCCESS);
}

static t_result	stack_init(t_stack *stack, int capacity)
{
	stack->capacity = capacity;
	stack->length = capacity;
	stack->nums = malloc(capacity * sizeof(int));
	if (stack->nums == NULL)
		return (FAILURE);
	return (SUCCESS);
}

static t_result	data_init(t_data *data, int capacity)
{
	if (stack_init(&data->stack_a, capacity) == FAILURE)
		return (FAILURE);
	if (stack_init(&data->stack_b, capacity) == FAILURE)
	{
		stack_destroy(&data->stack_a);
		return (FAILURE);
	}
	data->stack_b.length = 0;
	return (SUCCESS);
}

static t_result	stack_fill_from_argv(t_data *data, char **argv)
{
	int	i;

	i = 0;
	while (i < data->stack_a.capacity)
	{
		if (ft_atoi_checked(argv[i + 1], &data->stack_a.nums[i]) == FAILURE)
		{
			stack_destroy(&data->stack_a);
			stack_destroy(&data->stack_b);
			return (FAILURE);
		}
		i++;
	}
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (data_init(&data, argc - 1) == FAILURE)
		return (1);
	if (stack_fill_from_argv(&data, argv) == FAILURE)
	{
		ft_putendl_fd("Error", 1);
		return (1);
	}
	if (has_no_duplicates(&data.stack_a) == FAILURE)
	{
		ft_putendl_fd("Error", 1);
		return (1);
	}
	print_stacks(&data);
	// swap(&data.stack_a);
	// push(&data.stack_a, &data.stack_b);
	// printf("\n");
	// print_stacks(&data);
	stack_destroy(&data.stack_a);
	stack_destroy(&data.stack_b);
	return (0);
}

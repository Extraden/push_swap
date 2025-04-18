/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:46:05 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/18 16:29:54 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

static t_result	has_no_duplicates(t_stack *stack)
{
	size_t	i;
	size_t	j;

	if (stack->length == 0)
		return (FAILURE);
	i = 0;
	while (i < stack->length - 1)
	{
		j = i + 1;
		while (j < stack->length)
		{
			if (stack->nums[i] == stack->nums[j])
				return (FAILURE);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

t_result	stack_init(t_stack *stack, int length)
{
	stack->length = length;
	stack->nums = malloc(length * sizeof(int));
	if (stack->nums == NULL)
		return (FAILURE);
	return (SUCCESS);
}

static t_result	data_init(t_data *data, int length)
{
	if (stack_init(&data->stack_a, length) == FAILURE)
		return (FAILURE);
	if (stack_init(&data->stack_b, length) == FAILURE)
	{
		free(data->stack_a.nums);
		data->stack_a.nums = NULL;
		return (FAILURE);
	}
	data->stack_b.length = 0;
	return (SUCCESS);
}

static t_result	stack_fill_from_argv(t_data *data, char **argv)
{
	size_t	i;

	i = 0;
	while (i < data->stack_a.length)
	{
		if (ft_atoi_checked(argv[i + 1], &data->stack_a.nums[i]) == FAILURE)
		{
			free_stacks(data);
			return (FAILURE);
		}
		i++;
	}
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (0);
	if (data_init(&data, argc - 1) == FAILURE)
		return (1);
	if (stack_fill_from_argv(&data, argv) == FAILURE)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return (1);
	}
	if (has_no_duplicates(&data.stack_a) == FAILURE)
	{
		free_stacks(&data);
		ft_putendl_fd("Error", STDERR_FILENO);
		return (1);
	}
	if (create_indices(&data.stack_a) == FAILURE)
	{
		free_stacks(&data);
		return (1);
	}
	call_algorithm(&data);
	free_stacks(&data);
	return (0);
}

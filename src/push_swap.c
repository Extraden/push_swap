/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:46:05 by dsemenov          #+#    #+#             */
/*   Updated: 2025/03/31 19:25:14 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static t_result  stack_destroy(t_stack *stack)
{
  free(stack);
  return (SUCCESS);
}

static t_result	stack_init(t_stack* stack, int capacity) {
	stack->capacity = capacity;
	stack->length = capacity;
	stack->nums = malloc(capacity * sizeof(int));
	if (stack->nums == NULL)
		return FAILURE;
	return SUCCESS;
}

static t_result	data_init(t_data* data, int capacity) {
	if (stack_init(&data->stack_a, capacity) == FAILURE)
		return FAILURE;
	if (stack_init(&data->stack_b, capacity) == FAILURE)
  {
		stack_destroy(&data->stack_a);
		return FAILURE;
	}
  data->stack_b.length = 0;
	return SUCCESS;
}

static t_result stack_fill_from_argv(t_data *data, char **argv)
{
  int i;

	i = 0;
	while (i < data->stack_a.length)
	{
		data->stack_a.nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
  return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (data_init(&data, argc - 1) == FAILURE)
    return (1);
  if (parse(argc - 1, &argv[1]) == FAILURE)
    return (1);
  stack_fill_from_argv(&data, argv);
  print_stacks(&data);

	printf("\n");
  print_stacks(&data);
	return (0);
}

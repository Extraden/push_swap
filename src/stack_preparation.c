/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_preparation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:53:21 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 15:08:16 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

static void	swap_nums(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	sort_stack(t_stack *stack)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < stack->length - 1)
	{
		j = 0;
		while (j < stack->length - 1 - i)
		{
			if (stack->nums[j] > stack->nums[j + 1])
				swap_nums(&stack->nums[j], &stack->nums[j + 1]);
			j++;
		}
		i++;
	}
}

static void	fill_indices(t_stack *stack, t_stack *sorted_stack)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < stack->length)
	{
		j = 0;
		while (j < sorted_stack->length)
		{
			if (stack->nums[i] == sorted_stack->nums[j])
			{
				stack->nums[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

t_result	create_indices(t_stack *stack)
{
	t_stack	sorted_stack;

	ft_memset(&sorted_stack, 0, sizeof(t_stack));
	if (stack_init(&sorted_stack, stack->length) == FAILURE)
		return (FAILURE);
	ft_memcpy(sorted_stack.nums, stack->nums, stack->length * sizeof(int));
	sort_stack(&sorted_stack);
	fill_indices(stack, &sorted_stack);
	free(sorted_stack.nums);
	return (SUCCESS);
}

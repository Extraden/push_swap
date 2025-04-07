/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_preparation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:53:21 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/06 19:53:21 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap_nums(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_stack(t_stack *stack)
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

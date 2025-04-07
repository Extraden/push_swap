/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_preparation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:53:21 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/07 17:49:20 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

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

#include <stdio.h>

void	create_indices(t_stack *stack)
{
	size_t	i;
  size_t  j;
	t_stack	sorted_stack;

  ft_memset(&sorted_stack, 0, sizeof(t_stack));
	if (stack_init(&sorted_stack, stack->capacity) == FAILURE)
		exit(1);
	ft_memcpy(sorted_stack.nums, stack->nums, stack->length * sizeof(int));
	sort_stack(&sorted_stack);
	printf("\n\n\n Sorted stack:               Index:\n");
	 i = 0;
	 while (i < stack->length)
	 {
    j = 0;
	   while (j < sorted_stack.length)
	   {
	     if (stack->nums[i] == sorted_stack.nums[j])
	       stack->nums[i] = j;
	     j++;
	   }
	   i++;
	 }
}

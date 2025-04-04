/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:50:25 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 20:18:29 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>

t_result  is_sorted(t_stack *stack)
{
  int tmp;
  size_t i;

  i = 0;
  while (i < stack->length - 1)
  {
    tmp = stack->nums[i];
    if (tmp > stack->nums[i + 1])
      return (FAILURE);
    i++;
  }
  return (SUCCESS);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  t_stack stack;
  size_t  i;

  stack.nums = malloc(5);
  stack.length = 5;
  i = 0;
  while (i < stack.length)
  {
    stack.nums[i] = i;
    i++;
  }
  stack.nums[3] = 100;
  if (is_sorted(&stack) == SUCCESS)
    printf("Sorted!");
  else
   printf("Not sorted!");
}

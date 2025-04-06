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
  size_t i;

  i = 0;
  while (i < stack->length - 1)
  {
    
    if (stack->nums[i] > stack->nums[i + 1])
      return (FAILURE);
    i++;
  }
  return (SUCCESS);
}

void  radix_algo(t_data *data)
{
  size_t i;

  i = 0;
  while (i < data->stack_a.length)
  {
      if ((data->stack_a.nums[0] & 1) == 0)
      {
	      pb(data);
//	      i++;
      }
      ra(data);
      i++;
  }
}

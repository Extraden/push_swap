/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:39:36 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 15:41:21 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>

static void	sort_3(t_data *data)
{
	while (!(data->stack_a.nums[2] > data->stack_a.nums[1]
			&& data->stack_a.nums[2] > data->stack_a.nums[0]))
		ra(data);
	if (is_sorted(&data->stack_a) != SUCCESS)
		sa(data);
}

int	get_index_of_min(t_stack *stack)
{
	int		tmp;
	size_t	i;
	int		result;

	i = 0;
	tmp = stack->nums[i];
	while (i < stack->length)
	{
		if (stack->nums[i] <= tmp)
		{
			tmp = stack->nums[i];
			result = i;
		}
		i++;
	}
	return (result);
}

static void	push_smallest_to_b(t_data *data, size_t index_of_min)
{
	while (data->stack_a.length > 3)
	{
		index_of_min = get_index_of_min(&data->stack_a);
		if (index_of_min == 0)
			pb(data);
		else
		{
			if (index_of_min < 2)
				ra(data);
			else
				rra(data);
		}
	}
}

void	sort_small_stack(t_data *data)
{
	size_t	index_of_min;

	index_of_min = get_index_of_min(&data->stack_a);
	if (data->stack_a.length > 3)
		push_smallest_to_b(data, index_of_min);
	sort_3(data);
	if (data->stack_b.length != 0)
	{
		if ((data->stack_b.length == 2)
			&& (is_sorted(&data->stack_b) == SUCCESS))
			sb(data);
		push_all_to_a(data);
	}
}

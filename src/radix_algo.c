/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:41:44 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:00 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_to_a(t_data *data)
{
	while (data->stack_b.length > 0)
		pa(data);
}

void	radix_algo(t_data *data)
{
	size_t	i;
	size_t	j;
	size_t	tmp_length;

	j = 0;
	while (is_sorted(&data->stack_a) != SUCCESS)
	{
		tmp_length = data->stack_a.length;
		i = 0;
		while (i < tmp_length)
		{
			if (((data->stack_a.nums[0] >> j) & 1) == 0)
			{
				pb(data);
				tmp_length--;
				continue ;
			}
			ra(data);
			i++;
		}
		push_all_to_a(data);
		j++;
	}
}

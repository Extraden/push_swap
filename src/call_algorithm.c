/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:50:25 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/18 15:30:36 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_algorithm(t_data *data)
{
	if (is_sorted(&data->stack_a) == SUCCESS)
		return ;
	if (data->stack_a.length == 1)
		return ;
	else if (data->stack_a.length == 2)
	{
		if (is_sorted(&data->stack_a) != SUCCESS)
			sa(data);
		return ;
	}
	else if (data->stack_a.length <= 5)
	{
		sort_small_stack(data);
		return ;
	}
	else
	{
		radix_algo(data);
		return ;
	}
}

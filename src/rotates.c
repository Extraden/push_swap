/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:08:18 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 14:15:15 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "unistd.h"

void	ra(t_data *data)
{
	rotate(&data->stack_a);
	ft_putendl_fd("ra", STDOUT_FILENO);
}

void	rb(t_data *data)
{
	rotate(&data->stack_b);
	ft_putendl_fd("rb", STDOUT_FILENO);
}

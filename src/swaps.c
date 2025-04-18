/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:09:08 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 14:16:39 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <unistd.h>

void	sa(t_data *data)
{
	swap(&data->stack_a);
	ft_putendl_fd("sa", STDOUT_FILENO);
}

void	sb(t_data *data)
{
	swap(&data->stack_b);
	ft_putendl_fd("sb", STDOUT_FILENO);
}

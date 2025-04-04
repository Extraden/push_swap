/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:08:18 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 19:32:19 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "unistd.h"

void  ra(t_data *data)
{
  rotate(&data->stack_a);
  ft_putendl_fd("ra", STDOUT_FILENO);
}

void  rb(t_data *data)
{
  rotate(&data->stack_b);
  ft_putendl_fd("rb", STDOUT_FILENO);
}

void  rr(t_data *data)
{
  rotate(&data->stack_a);
  rotate(&data->stack_b);
  ft_putendl_fd("rr", STDOUT_FILENO);
}


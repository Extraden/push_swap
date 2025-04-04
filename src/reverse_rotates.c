/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:08:18 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 19:30:26 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "unistd.h"

void  rra(t_data *data)
{
  reverse_rotate(&data->stack_a);
  ft_putendl_fd("rra", STDOUT_FILENO);
}

void  rrb(t_data *data)
{
  reverse_rotate(&data->stack_b);
  ft_putendl_fd("rrb", STDOUT_FILENO);
}

void  rrr(t_data *data)
{
  reverse_rotate(&data->stack_a);
  reverse_rotate(&data->stack_b);
  ft_putendl_fd("rrr", STDOUT_FILENO);
}


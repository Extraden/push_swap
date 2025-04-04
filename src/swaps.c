/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:09:08 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 19:04:03 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <unistd.h>

void  sa(t_data *data)
{
  swap(&data->stack_a);
  ft_putendl_fd("sa", STDOUT_FILENO);
}

void  sb(t_data *data)
{
  swap(&data->stack_b);
  ft_putendl_fd("sb", STDOUT_FILENO);
}

void  ss(t_data *data)
{
  swap(&data->stack_a);
  ft_putendl_fd("ss", STDOUT_FILENO);
}

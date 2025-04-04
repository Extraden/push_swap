/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:58:52 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 19:31:12 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "unistd.h"

void  pa(t_data *data)
{
  push(&data->stack_b, &data->stack_a);
  ft_putendl_fd("pa", STDOUT_FILENO);
}

void  pb(t_data *data)
{
  push(&data->stack_a, &data->stack_b);
  ft_putendl_fd("pb", STDOUT_FILENO);
}

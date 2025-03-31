/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:08:53 by dsemenov          #+#    #+#             */
/*   Updated: 2025/03/31 19:35:02 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static t_result  is_valid_number(char *argument)
{
  int i;

  i = 0;
  if (argument[i] == '-')
    i++;
  while (argument[i] != '\0')
  {
    if (argument[i] < '0' || argument[i] > '9')
    {
      return (FAILURE);
    }
    i++;
  }
  return (SUCCESS);
}

t_result  parse(int argc, char **argv)
{
  char *argument;
  int i;

  i = 0;
  while (i < argc)
  {
    argument = argv[i];
    if (is_valid_number(argument) == FAILURE)
    {
        ft_putendl_fd("Error", 1);
        return (FAILURE);
    }
    i++;
  }
  return (SUCCESS);
}

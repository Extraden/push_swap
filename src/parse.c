/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:08:53 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/02 19:17:30 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stddef.h>
#include <limits.h>

//TODO check if int and no overflow
static t_result is_in_int_range(char *argument)
{
  size_t  len;

  len = ft_strlen(argument);
  if (len > 11 || (len == 11 && argument[0] != '-'))
    return (FAILURE);
  /*if (len == 11 && argument[0] == '-')*/
  /*  if (ft_strncmp(argument, "-2147483648", 12) > 0)*/
  /*    return (FAILURE);*/
  /*if (len >= 10)*/
  /*  if (ft_strncmp(argument, "2147483647", 11) < 0)*/
  /*    return (FAILURE);*/
  return (SUCCESS);
}

static t_result  is_valid_number(char *argument)
{
  int i;

  i = 0;
  if (argument[i] == '-')
    i++;
  while (argument[i] != '\0')
  {
    if (argument[i] < '0' || argument[i] > '9')
      return (FAILURE);
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
    if (is_valid_number(argument) == FAILURE || is_in_int_range(argument))
    {
        ft_putendl_fd("Error", 1);
        return (FAILURE);
    }
    i++;
  }
  return (SUCCESS);
}

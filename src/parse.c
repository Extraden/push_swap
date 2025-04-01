/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:08:53 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/01 15:25:18 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stddef.h>
#include <limits.h>

static t_result has_no_duplicates(int argc, char **argv)
{
  size_t  i;
  size_t  j;
  size_t  len;
  char  *arg1;
  char  *arg2;

  i = 0;
  while (i < (size_t) argc - 1)
  {
    arg1 = argv[i];
    len = ft_strlen(arg1) + 1;
    j = i + 1;
    while (j < (size_t) argc)
    {
      arg2 = argv[j];
      if (ft_strncmp(arg1, arg2, len) == 0)
        return (FAILURE);
      j++;
    }
    i++;
  }
  return (SUCCESS);
}


//TODO check if int and no overflow
/*static t_result is_int()*/
/*{*/
/**/
/*}*/

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
    if (is_valid_number(argument) == FAILURE || has_no_duplicates(argc, argv) == FAILURE)
    {
        ft_putendl_fd("Error", 1);
        return (FAILURE);
    }
    i++;
  }
  return (SUCCESS);
}

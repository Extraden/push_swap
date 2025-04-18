/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:05 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/18 00:00:32 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <limits.h>
#include <stdlib.h>

static const char	*skip_spaces_and_sign(const char *nptr, int *sign)
{
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			*sign *= -1;
		nptr++;
	}
	while (*nptr == '0' && *(nptr + 1) != '\0')
		nptr++;
	return (nptr);
}

t_result	ft_atoi_checked(const char *nptr, int *num)
{
	long	res;
	int		sign;
	int		digit_found;

	res = 0;
	sign = 1;
	digit_found = 0;
	nptr = skip_spaces_and_sign(nptr, &sign);
	if (ft_strlen(nptr) > 11)
		return (FAILURE);
	while (*nptr >= '0' && *nptr <= '9')
	{
		digit_found = 1;
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	if (!digit_found || *nptr != '\0')
		return (FAILURE);
	res *= sign;
	if (res > INT_MAX || res < INT_MIN)
		return (FAILURE);
	*num = (int)res;
	return (SUCCESS);
}

t_result	is_sorted(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (i < stack->length - 1)
	{
		if (stack->nums[i] > stack->nums[i + 1])
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

void	free_stacks(t_data *data)
{
	if (data->stack_a.nums != NULL)
	{
		free(data->stack_a.nums);
		data->stack_a.nums = NULL;
	}
	if (data->stack_b.nums != NULL)
	{
		free(data->stack_b.nums);
		data->stack_b.nums = NULL;
	}
}

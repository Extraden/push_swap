/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:05 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/04 17:46:39 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

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

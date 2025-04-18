/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:05 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/21 15:41:02 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - 48);
		nptr++;
	}
	return (res * sign);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void) ac;
	char str[55] = "   5525 134";
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
}
*/

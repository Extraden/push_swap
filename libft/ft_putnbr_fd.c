/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:28:27 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/19 15:33:48 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	tmp;

	tmp = n;
	if (n < 0)
	{
		tmp = -tmp;
		write(fd, "-", 1);
	}
	if (tmp >= 10)
	{
		ft_putnbr_fd(tmp / 10, fd);
	}
	ft_putchar_fd(tmp % 10 + '0', fd);
}

/*
int		main(void) {
    ft_putnbr_fd(15127823, 1);
    ft_putchar_fd('\n', 2);
    ft_putnbr_fd(-2147483648, 1);
}
*/

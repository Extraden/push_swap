/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:01:48 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/18 11:55:55 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	numlength(int n)
{
	size_t			len;
	unsigned int	buffer;

	len = 0;
	if (n < 0)
	{
		buffer = n * -1;
		len++;
	}
	else
		buffer = n;
	while (buffer >= 10)
	{
		len++;
		buffer /= 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			length;
	char			*s;
	size_t			i;
	unsigned int	buffer;

	length = numlength(n);
	s = malloc(length * sizeof (char) + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		buffer = n * -1;
	}
	else
		buffer = n;
	i = 0;
	s[length] = '\0';
	while (i < length && s[length - i - 1] != '-')
	{
		s[length - i - 1] = buffer % 10 + '0';
		buffer /= 10;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	int x = -1152945;

	__builtin_printf("%zu\n", numlength(x));
	__builtin_printf("%s", ft_itoa(x));

}
*/

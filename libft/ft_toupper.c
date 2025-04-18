/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:09:19 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/08 14:13:27 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('z'));
	printf("%c\n", toupper('A'));
	printf("%c\n", toupper('Z'));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:09:19 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/08 14:13:15 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('z'));
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('Z'));
}
*/

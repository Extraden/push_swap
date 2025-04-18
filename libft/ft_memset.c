/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:31:16 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/07 15:08:33 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer1[20];
    char buffer2[20];

    // Initialize buffers with different values
    memset(buffer1, 'B', sizeof(buffer1));
    ft_memset(buffer2, 'B', sizeof(buffer2));

    // Use standard memset to set first 10 bytes to 'A'
    memset(buffer1, 'A', 10);

    // Use custom ft_memset to set first 10 bytes to 'A'
    ft_memset(buffer2, 'A', 10);

    // Compare the results
    printf("Standard memset results:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("buffer1[%d] = %c\n", i, buffer1[i]);
    }

    printf("\nCustom ft_memset results:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("buffer2[%d] = %c\n", i, buffer2[i]);
    }

    return 0;
}
*/

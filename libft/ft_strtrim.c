/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:39 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/14 20:02:00 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	first_index(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	has_char;

	i = 0;
	while (s1[i])
	{
		has_char = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				has_char = 1;
			j++;
		}
		if (has_char == 0)
			break ;
		i++;
	}
	return (i);
}

static size_t	last_index(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	has_char;

	i = ft_strlen(s1) - 1;
	while (i)
	{
		has_char = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				has_char = 1;
			j++;
		}
		if (has_char == 0)
			break ;
		i--;
	}
	return (i);
}

static char	*empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	i = 0;
	start = first_index(s1, set);
	end = last_index(s1, set);
	if (start > end || !*s1)
		return (empty_str());
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

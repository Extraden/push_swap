/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:48:24 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/18 19:30:04 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words_num;
	size_t	in_word;

	in_word = 0;
	i = 0;
	words_num = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			words_num++;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words_num);
}

static void	*free_all(char **tab, size_t words_num)
{
	size_t	i;

	i = 0;
	while (i < words_num)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words_num;
	size_t	word_length;
	size_t	word_index;

	words_num = count_words(s, c);
	res = malloc((words_num + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	res[words_num] = NULL;
	word_index = 0;
	while (*s && word_index < words_num)
	{
		while (*s && *s == c)
			s++;
		word_length = 0;
		while (s[word_length] && s[word_length] != c)
			word_length++;
		res[word_index] = ft_substr(s, 0, word_length);
		if (!res[word_index])
			return (free_all(res, word_index));
		word_index++;
		s += word_length;
	}
	return (res);
}

/*
int	main(void)
{
	char	*s = "Hello, my name, is";
	char	c = ' ';
	char	**res;

	__builtin_printf("%zu\n", count_words(s, c));
	res = ft_split(s, c);
	__builtin_printf("%s\n", res[0]);
	__builtin_printf("%s\n", res[1]);
	__builtin_printf("%s\n", res[2]);
	__builtin_printf("%s\n", res[3]);
	__builtin_printf("%s\n", res[4]);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:14:00 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/10 17:29:26 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	word;
	size_t	i;
	size_t	a;

	word = 0;
	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			a = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			word++;
		}
	}
	return (word);
}

static char	**ft_fill_arr(char **arr, char const *s, size_t word, char c)
{
	size_t	i;
	size_t	words;

	words = wordcount(s, c);
	i = 0;
	while (word < words)
	{
		if (s[i] == c)
			i++;
		else
		{
			arr[word] = ft_substr(&s[i], 0, ft_strlen_c(&s[i], c));
			if (arr[word] == NULL)
				return (ft_free_arr((void **)arr), NULL);
			i = i + ft_strlen_c(&s[i], c);
			word++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	word;

	if (!s)
		return (NULL);
	arr = NULL;
	word = 0;
	words = wordcount(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_fill_arr(arr, s, word, c);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:37:49 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:32 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim(char const *s1, char const *set, size_t a, int c)
{
	size_t	b;

	b = 0;
	while (set[b])
	{
		if (s1[a] == set[b])
		{
			if (c == 0)
				a++;
			else
				a--;
			b = 0;
		}
		else
			b++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front_tirm;
	size_t	back_tirm;
	char	*s;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	if (ft_strlen(s1) == 0)
	{
		s = ft_calloc(1, 1);
		return (s);
	}
	front_tirm = trim(s1, set, 0, 0);
	back_tirm = trim(s1, set, ft_strlen((char *)s1) - 1, 1);
	return (ft_substr(s1, front_tirm, back_tirm - front_tirm + 1));
}

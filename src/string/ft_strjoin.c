/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:06:57 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/15 17:22:30 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	char	*ptr;

	a = 0;
	i = a;
	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!ptr)
		return (0);
	while (s1[a])
		ptr[i++] = s1[a++];
	a = 0;
	while (s2[a])
		ptr[i++] = s2[a++];
	ptr[i] = '\0';
	return (ptr);
}

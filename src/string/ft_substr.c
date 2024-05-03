/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:40:01 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:42 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cpy(char *ptr, char const *str, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (str[start] && i < len)
	{
		ptr[i] = str[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;

	if (!str)
		return (NULL);
	if (ft_strlen((char *)str) <= start)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len < ft_strlen((char *)str + start))
		ptr = malloc((len + 1) * sizeof(char));
	else
		ptr = malloc((ft_strlen((char *)str + start) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	cpy(ptr, str, start, len);
	if (ptr)
		return (ptr);
	return (0);
}

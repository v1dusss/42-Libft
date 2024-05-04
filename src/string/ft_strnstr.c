/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:10:19 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:25 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	p;

	i = 0;
	p = 0;
	if ((!needle || !haystack) && len == 0)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && len != i)
	{
		k = 0;
		p = i;
		while (haystack[i] == needle[k] && len != i)
		{
			i++;
			k++;
			if (needle[k] == '\0')
				return ((char *)&haystack[p]);
		}
		i = p;
		i++;
	}
	return (0);
}

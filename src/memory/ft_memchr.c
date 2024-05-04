/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:12:16 by vsivanat          #+#    #+#             */
/*   Updated: 2023/10/22 13:35:16 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (ptr[i] != (unsigned char)c && i + 1 < n)
		i++;
	if (ptr[i] == (unsigned char)c && n > 0)
		return ((void *)(&ptr[i]));
	return (NULL);
}

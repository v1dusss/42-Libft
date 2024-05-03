/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:32:02 by vsivanat          #+#    #+#             */
/*   Updated: 2023/10/21 16:39:47 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdst;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	ptrsrc = (unsigned char *)src;
	ptrdst = (unsigned char *)dst;
	while (n != 0)
	{
		ptrdst[i] = ptrsrc[i];
		n--;
		i++;
	}
	return (ptrdst);
}

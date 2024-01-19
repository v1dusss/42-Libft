/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuhlber <jmuhlber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:44:41 by jmuhlber          #+#    #+#             */
/*   Updated: 2023/10/12 15:04:24 by jmuhlber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	cpy_len;

	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		if (src_len < dstsize - 1)
			cpy_len = src_len;
		else
			cpy_len = dstsize - 1;
		ft_memcpy(dst, src, cpy_len);
		dst[cpy_len] = '\0';
	}
	return (src_len);
}

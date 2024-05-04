/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:39 by jmuhlber          #+#    #+#             */
/*   Updated: 2023/10/25 16:10:34 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	if (len < dstsize)
	{
		ft_strlcpy((dst + len), src, (dstsize - len));
		return (len + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}

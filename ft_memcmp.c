/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:48:29 by vsivanat          #+#    #+#             */
/*   Updated: 2023/10/21 16:39:18 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && (unsigned char)p1[i] == (unsigned char)p2[i])
		i++;
	return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}

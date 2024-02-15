/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:29:29 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:18 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& (i < (n - 1)) && s1[i])
		i++;
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

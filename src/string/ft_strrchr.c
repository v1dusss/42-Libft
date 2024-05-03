/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:08:58 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/05 20:52:12 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	i = ft_strlen((char *)str);
	while (str[i] != (char)c && i != 0)
		i--;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:43:47 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/10 17:36:57 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		a;
	int		k;

	i = 0;
	a = 1;
	k = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		a = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + (str[i++] - '0');
		if (str[i] < '0' || str[i] > '9')
			return (k * a);
	}
	return (0);
}

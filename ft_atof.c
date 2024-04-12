/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:53:15 by vsivanat          #+#    #+#             */
/*   Updated: 2024/03/25 17:54:10 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	result;
	double	dec;
	int		sign;

	result = 0.0;
	dec = 10.0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
		result = result * 10.0 + (*str++ - '0');
	if (*str == '.')
		str++;
	while (ft_isdigit(*str))
	{
		result = result + (*str++ - '0') / dec;
		dec *= 10.0;
	}
	return (result * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:27:31 by vsivanat          #+#    #+#             */
/*   Updated: 2023/10/22 12:55:18 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lengt(int n)
{
	int	digit;

	digit = 1;
	while (n > 9 && digit++ < 9)
		n = n / 10;
	return (digit);
}

static void	rek_convert(char *str, int n, int i)
{
	if (n / 10 > 0)
		rek_convert(str, n / 10, i - 1);
	str[i] = (n % 10) + '0';
}

static char	*edgecase(int minus)
{
	char	*s;

	s = malloc(12);
	if (!s && !minus)
		return (NULL);
	ft_strlcpy(s, "-2147483648", 12);
	s[ft_strlen(s)] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		minus;

	minus = 0;
	if (n == -2147483648)
		return (edgecase(minus));
	else
	{
		if (n < 0)
		{
			minus = 1;
			n *= -1;
		}
		str = ft_calloc(lengt(n) + minus + 1, sizeof(char));
		if (!str)
			return (NULL);
		if (minus)
			str[0] = '-';
		rek_convert(str, n, lengt(n) - 1 + minus);
		str[ft_strlen(str)] = '\0';
	}
	return (str);
}

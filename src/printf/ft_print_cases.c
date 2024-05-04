/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:15:13 by vsivanat          #+#    #+#             */
/*   Updated: 2024/05/04 16:39:59 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = putnbr(n / 10);
		if (i == -1)
			return (-1);
	}
	if (write(1, &"0123456789"[n % 10], 1) == -1)
		return (-1);
	return (i += 1);
}

int	integer(int n)
{
	int	k;

	k = 0;
	if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			if (write(1, "-", 1) == -1)
				return (-1);
			n *= -1;
			k = 1;
		}
		k += putnbr((unsigned int)n);
		if (k == -1)
			return (-1);
	}
	return (k);
}

int	convert(unsigned int n, char c)
{
	int	i;

	i = 0;
	if (n > 15)
	{
		i = convert(n / 16, c);
		if (i == -1)
			return (-1);
	}
	if (c == 'X')
	{
		if (write(1, &"0123456789ABCDEF"[n % 16], 1) == -1)
			return (-1);
	}
	else
	{
		if (write(1, &"0123456789abcdef"[n % 16], 1) == -1)
			return (-1);
	}
	return (i += 1);
}

int	convert_p(unsigned long n, char c)
{
	int	i;

	i = 0;
	if (n > 15)
	{
		i = convert_p(n / 16, c);
		if (i == -1)
			return (-1);
	}
	if (write(1, &"0123456789abcdef"[n % 16], 1) == -1)
		return (-1);
	return (i += 1);
}

int	pointer(void *p)
{
	size_t	i;
	int		k;

	k = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	i = 2;
	if (p == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		i++;
	}
	else
	{
		k = convert_p((unsigned long)p, 'x');
		if (k == -1)
			return (-1);
	}
	return (i + k);
}

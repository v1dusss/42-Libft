/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:50 by vsivanat          #+#    #+#             */
/*   Updated: 2024/05/03 20:30:11 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	one_character(int c)
{
	return (write(1, &c, 1));
}

static int	string(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	else
	{
		while (s[i] != '\0')
			i++;
		if (write(1, s, i) == -1)
			return (-1);
	}
	return (i);
}

static int	prozent(const char *s, va_list args)
{
	int	count;

	count = 0;
	s += 1;
	if ((*s) == 'c')
		count = one_character(va_arg(args, int));
	else if ((*s) == 's')
		count = string(va_arg(args, char *));
	else if ((*s) == 'p')
		count = pointer(va_arg(args, void *));
	else if ((*s) == 'd' || (*s) == 'i')
		count = integer(va_arg(args, int));
	else if ((*s) == 'u')
		count = putnbr(va_arg(args, unsigned int));
	else if ((*s) == 'X')
		count = convert(va_arg(args, int), 'X');
	else if ((*s) == 'x')
		count = convert(va_arg(args, int), 'x');
	else if ((*s) == 37)
		count = write(1, "%", 1);
	else
		return (-1);
	return (count);
}

static size_t	ft_loop(const char *s, va_list *args)
{
	int	count;
	int	i;

	count = 0;
	while (*s)
	{
		if (*s == '%' && s[1])
		{
			i = prozent(s, *args);
			s += 1;
		}
		else
		{
			i = one_character(*s);
		}
		if (i == -1)
			return (-1);
		count += i;
		i = 0;
		s += 1;
	}
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	i = ft_loop(input, &args);
	va_end(args);
	return (i);
}

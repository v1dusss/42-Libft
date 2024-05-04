/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:33:12 by vsivanat          #+#    #+#             */
/*   Updated: 2024/05/04 17:36:45 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	putnbr(unsigned int n);
int	integer(int n);
int	convert(unsigned int n, char c);
int	convert_p(unsigned long n, char c);
int	pointer(void *p);
int	ft_printf(const char *input, ...);

#endif
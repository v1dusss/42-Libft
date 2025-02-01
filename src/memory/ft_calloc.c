/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:11:33 by vsivanat          #+#    #+#             */
/*   Updated: 2025/01/31 18:54:48 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count <= 0 || size <= 0)
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	return (ft_memset(ptr, 0, count * size));
}

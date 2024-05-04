/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:00:59 by vsivanat          #+#    #+#             */
/*   Updated: 2024/02/10 17:17:30 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_arr(void **arr)
{
	size_t	y;

	y = 0;
	while (arr[y] != NULL)
	{
		free(arr[y]);
		y++;
	}
	free(arr);
}
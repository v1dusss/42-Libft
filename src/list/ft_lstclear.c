/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:53:36 by vsivanat          #+#    #+#             */
/*   Updated: 2023/10/25 14:29:26 by vsivanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;
	t_list	*hallo;

	new = *lst;
	while (new)
	{
		hallo = new->next;
		ft_lstdelone(new, del);
		new = hallo;
	}
	*lst = NULL;
}

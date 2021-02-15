/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:51:02 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/04 22:17:36 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	res = 0;
	if (lst == 0)
		return (0);
	while (lst != 0)
	{
		aux = ft_lstnew((*f)(lst->content));
		if (aux == 0)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, aux);
		lst = lst->next;
	}
	return (res);
}

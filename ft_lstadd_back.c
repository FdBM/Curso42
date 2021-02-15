/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:09:53 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/02 23:20:27 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if (*lst == 0)
		*lst = new;
	else
	{
		aux = *lst;
		while (aux->next != 0)
			aux = aux->next;
		aux->next = new;
	}
}

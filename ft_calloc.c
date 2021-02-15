/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 22:02:14 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/07 22:49:17 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(count * size);
	if (p == '\0')
		return (0);
	while (i < (int)count * (int)size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}

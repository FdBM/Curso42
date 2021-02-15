/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 23:54:52 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/03 23:48:32 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	char			*as;

	i = 0;
	as = (void *)s;
	while (i < (int)n)
	{
		if (as[i] == (char)c)
		{
			return ((void *)&as[i]);
		}
		i++;
	}
	return (0);
}

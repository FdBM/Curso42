/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:25:14 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/18 23:29:05 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				a;
	unsigned char	*adst;
	unsigned char	*asrc;

	a = 0;
	adst = (unsigned char*)dst;
	asrc = (unsigned char*)src;
	while (a < (int)n)
	{
		adst[a] = asrc[a];
		if (asrc[a] == (unsigned char)c)
			return ((void *)&dst[a + 1]);
		a++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 02:04:36 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/21 02:26:05 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int ret;
	int i;
	int a;
	int o;
	int u;

	i = ft_strlen(dst);
	a = ft_strlen((char *)src);
	ret = i + a;
	u = (int)dstsize - i - 1;
	if (i >= (int)dstsize)
		return (a + (int)dstsize);
	o = 0;
	while (src[o] != '\0' && o < u)
	{
		dst[i] = src[o];
		i++;
		o++;
	}
	dst[i] = '\0';
	return ((size_t)ret);
}

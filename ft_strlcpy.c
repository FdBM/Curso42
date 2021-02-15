/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 00:37:57 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/03 23:50:17 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;
	int n;

	n = 0;
	i = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[i] != '\0')
	{
		if (n == 0 && dstsize > 0)
		{
			if (i == (int)dstsize - 1)
			{
				n = 1;
				dst[i] = '\0';
			}
			else
				dst[i] = src[i];
		}
		i++;
	}
	if (n == 0 && dstsize > 0)
		dst[i] = '\0';
	return (i);
}

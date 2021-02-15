/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:34:53 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/03 23:49:17 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dst < src)
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

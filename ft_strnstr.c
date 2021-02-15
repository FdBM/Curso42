/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 22:58:52 by fde-barr          #+#    #+#             */
/*   Updated: 2020/02/21 02:38:46 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int c;
	int a;
	int u;

	c = ft_strlen((char *)needle);
	a = 0;
	i = 0;
	if (c == 0)
		return ((char *)haystack);
	while (a < (int)len && haystack[a] != '\0')
	{
		u = a;
		while (haystack[a] == needle[i] && a < (int)len)
		{
			if (i == c - 1)
				return ((char *)&haystack[a - c + 1]);
			a++;
			i++;
		}
		i = 0;
		a = u + 1;
	}
	return (0);
}

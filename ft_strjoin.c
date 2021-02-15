/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:28:36 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 21:54:41 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		a;
	int		b;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = ft_strlen((char *)s1);
	b = ft_strlen((char *)s2);
	if (NULL == (s = (char *)malloc((a + b + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
	{
		s[i] = s1[i];
	}
	a = 0;
	while (s2[a] != '\0')
	{
		s[i] = s2[a];
		i++;
		a++;
	}
	s[i] = '\0';
	return (s);
}

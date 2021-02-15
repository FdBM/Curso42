/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:47:49 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 21:59:06 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		achari(char const *s1, char const *set)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (set[a] != '\0')
	{
		if (s1[i] == set[a] && s1[i] != '\0')
		{
			a = -1;
			i++;
		}
		a++;
	}
	return (i);
}

int		acharc(char const *s1, char const *set)
{
	int	c;
	int	a;

	c = ft_strlen((char *)s1) - 1;
	a = 0;
	while (set[a] != '\0')
	{
		if (s1[c] == set[a] && c > 0)
		{
			a = -1;
			c--;
		}
		a++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		c;
	int		d;

	if (s1 == NULL || set == NULL)
		return (NULL);
	d = 0;
	i = achari(s1, set) - 1;
	c = acharc(s1, set);
	if ((c - i) <= 0)
		return (ft_strdup(""));
	if (NULL == (s = (char *)malloc((c - i + 1) * sizeof(char))))
		return (NULL);
	while (++i <= c)
	{
		s[d] = s1[i];
		d++;
	}
	s[d] = '\0';
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 01:55:41 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 22:14:05 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		wordcounter(char const *s, char c)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			b++;
		}
		if (s[i] == '\0')
			return (b);
		i++;
	}
	return (b);
}

char	*palavrasb(char *str, char const *s, int a, int i)
{
	int	z;

	z = 0;
	while (a < i)
	{
		str[z] = s[a];
		a++;
		z++;
	}
	str[z] = '\0';
	return (str);
}

char	**retpalavras(char const *s, char c, char **palavras, int i)
{
	int a;
	int d;
	int b;

	d = 0;
	b = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
		{
			palavras[b] = NULL;
			return (palavras);
		}
		a = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (NULL == (palavras[b] = (char *)malloc((i - a + 1) * sizeof(char))))
			return (NULL);
		palavras[b] = palavrasb(palavras[b], s, a, i);
		b++;
	}
	palavras[b] = NULL;
	return (palavras);
}

char	**ft_split(char const *s, char c)
{
	int		b;
	char	**palavras;

	if (s == NULL)
		return (NULL);
	b = wordcounter(s, c);
	if (NULL == (palavras = (char **)malloc((b + 1) * sizeof(char*))))
		return (NULL);
	if (b == 0)
	{
		palavras[0] = NULL;
		return (palavras);
	}
	palavras = retpalavras(s, c, palavras, 0);
	return (palavras);
}

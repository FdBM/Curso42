/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 23:05:50 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 22:05:26 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		algarismos(long int a)
{
	int i;

	i = 0;
	if (a < 0)
		a = -a;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

int		potencia(int a)
{
	int aux;

	aux = 1;
	while (a > 1)
	{
		aux = aux * 10;
		a--;
	}
	return (aux);
}

char	*positivo(int p, int a)
{
	char	*s;
	int		i;
	int		d;

	if (NULL == (s = (char *)malloc((a + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	d = potencia(a);
	while (i < a)
	{
		s[i] = (p / d) + 48;
		i++;
		p = p % d;
		d = d / 10;
	}
	s[i] = '\0';
	return (s);
}

char	*negativo(long int p, int a)
{
	char	*s;
	int		i;
	int		d;

	if (NULL == (s = (char *)malloc((a + 2) * sizeof(char))))
		return (NULL);
	i = 1;
	s[0] = '-';
	p = -p;
	d = potencia(a);
	while (i <= a)
	{
		s[i] = (p / d) + 48;
		i++;
		p = p % d;
		d = d / 10;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		a;
	char	*s;

	if (n == 0)
	{
		if (NULL == (s = (char *)malloc(2 * sizeof(char))))
			return (NULL);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	a = algarismos((long int)n);
	if (n >= 0)
		s = positivo(n, a);
	else
		s = negativo((long int)n, a);
	return (s);
}

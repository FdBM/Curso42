/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 22:51:38 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 21:04:47 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		a;
	int		i;

	a = 0;
	i = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	if (NULL == (str = malloc((a + 1) * sizeof(char))))
		return (NULL);
	while (i < a)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

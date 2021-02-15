/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:05:19 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 22:17:27 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	char				*str;

	if (!s)
		return (NULL);
	if (len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s) - 1)
		return (ft_strdup(""));
	if (NULL == (str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:21:38 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/02 08:18:37 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int menos;

	menos = 0;
	res = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\r' || str[i] == '\f'
	|| str[i] == '\n' || str[i] == '\v' || str[i] == '\t'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			menos = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (menos == 1)
		res = -res;
	return (res);
}

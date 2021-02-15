/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:28:41 by fde-barr          #+#    #+#             */
/*   Updated: 2020/03/07 17:05:50 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		numalgarismos(int n)
{
	int algarismos;

	algarismos = 1;
	n = n / 10;
	while (n != 0)
	{
		n = n / 10;
		algarismos++;
	}
	return (algarismos);
}

static void		print_num(int *number, int digit, int fd)
{
	int		i;
	char	printn;

	i = 0;
	if (number[0] < 0)
		write(fd, "-", 1);
	while (i < digit)
	{
		if (number[i] < 0)
			number[i] = -number[i];
		printn = number[i] + '0';
		write(fd, &printn, 1);
		i++;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int	number[10];
	int	algarismos;
	int i;

	algarismos = numalgarismos(n);
	i = algarismos;
	while (i > 0)
	{
		number[i - 1] = n % 10;
		n = n / 10;
		i--;
	}
	print_num(number, algarismos, fd);
}

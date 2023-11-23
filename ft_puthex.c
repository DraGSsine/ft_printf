/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:45:56 by youchen           #+#    #+#             */
/*   Updated: 2023/11/23 12:28:20 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_hex(unsigned long long nb, char *hex, char X)
{
	int	tmp;
	int	i;

	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		if (X == 'X')
		{
			if (tmp >= 10)
				hex[i] = tmp + ('A' - 10);
			else
				hex[i] = tmp + '0';
		}
		else
		{
			if (tmp >= 10)
				hex[i] = tmp + ('a' - 10);
			else
				hex[i] = tmp + '0';
		}
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_puthex(unsigned long long nb, char X)
{
	char	hex[17];
	int		i;
	int		x;
	int		res;

	i = 0;
	x = 0;
	while (x <= 16)
		hex[x++] = '\0';
	if (nb == 0)
		return (ft_putchar('0'));
	i = printf_hex(nb, hex, X);
	while (i > 0)
	{
		res = ft_putchar(hex[--i]);
		if (res == -1)
			return (-1);
	}
	return (ft_strlen(hex));
}

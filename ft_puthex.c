/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:45:56 by youchen           #+#    #+#             */
/*   Updated: 2023/11/16 20:52:03 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf.h"

int	ft_puthex(unsigned long long nb, char X)
{
	char hex[17];
	int tmp;
	int i = 0;
	int x = 0;
	int res;
	
	while (x <= 16)
	{
		hex[x] = '\0';
		x++;
	}

	if (nb == 0)
	{
		res = ft_putchar('0');
		if(res == -1)
			return -1;
		return (1);
	}

	while (nb)
	{
		tmp = nb % 16;
		if (X == 'X')
			hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		else
			hex[i] = (tmp + (tmp >= 10 ? ('a' - 10) : '0'));
		nb /= 16;
		i++;
	}

	while (i > 0)
	{
		i--;
		res = ft_putchar(hex[i]);
		if(res == -1)
			return -1;
	}

	return (ft_strlen(hex));
}

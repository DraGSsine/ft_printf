/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:45:56 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 15:09:46 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

void	ft_puthex(uintptr_t nb,char X)
{
	char	hex[16];
	int		tmp;
	int		i;

	i = 0;

    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
	while (nb)
	{
		tmp = nb % 16;
		if(X == 'X')
			hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		else
			hex[i] = (tmp + (tmp >= 10 ? ('a' - 10) : '0'));
		nb /= 16;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(hex[i]);
		i--;
	}
}
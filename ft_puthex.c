/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:45:56 by youchen           #+#    #+#             */
/*   Updated: 2023/11/13 15:22:33 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(long long int nb)
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
		hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		nb /= 16;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(hex[i]);
		i--;
	}
}
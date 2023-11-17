/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:06 by youchen           #+#    #+#             */
/*   Updated: 2023/11/17 12:09:05 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(void *add)
{
	int					final_address;
	unsigned long long	address;
	int					res;

	address = 0;
	address = (unsigned long long)add;
	if (!address)
		return (ft_putstr("0x0"));
	res = ft_putstr("0x");
	if (res == -1)
		return (-1);
	final_address = ft_puthex(address, 'x');
	if (final_address == -1)
		return (-1);
	return (final_address + 2);
}

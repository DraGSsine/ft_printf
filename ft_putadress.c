/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:06 by youchen           #+#    #+#             */
/*   Updated: 2023/11/16 21:03:26 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_printf.h"

int ft_putadress(void *add) {
    int final_address;
    unsigned long long address = 0;
    int res;

    address = (unsigned long long)add;
    if (!address) {
        return ft_putstr("0x0");
    }
    res = ft_putstr("0x");
    if(res == -1)
        return -1;
    final_address = ft_puthex(address,'x');
    if(final_address == -1)
        return -1;
    return (final_address + 2);
}

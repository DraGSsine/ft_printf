/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:06 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 15:12:44 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>

void ft_putpointer(void *ptr)
{
    ft_putstr("0x");
    uintptr_t address = (uintptr_t)ptr;
    ft_puthex(address,'x');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:07:16 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 15:49:52 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
                ft_putstr(va_arg(args, char *));
            else if (*format == 'i')
                ft_itoa(va_arg(args, int));
            else if (*format == 'c')
                ft_putchar(*(va_arg(args, char *)));
            else if (*format == 'd')
                ft_itoa(va_arg(args, int));
            else if (*format == 'x')
                ft_puthex(va_arg(args, int), *format);
            else if (*format == 'u')
                ft_put_unsigned_int(va_arg(args, int));
            else if (*format == 'p')
                ft_putpointer(va_arg(args, void *));
            else
            {
                if (*format == '%')
                {
                    ft_putchar('%');
                }
                else
                {
                    ft_putchar(*format);
                }
            }
        }
        else
            ft_putchar(*format);
        format++;
    }

    va_end(args);
    return 0;
}

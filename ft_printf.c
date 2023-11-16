/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:07:16 by youchen           #+#    #+#             */
/*   Updated: 2023/11/16 23:30:03 by youchen          ###   ########.fr       */
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
    int count;
    //char *str;

    count = 0;
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                int res = ft_putstr(va_arg(args, char *));
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == 'i')
            {
                int res = ft_itoa(va_arg(args, int));
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == 'c')
            {
                int res = ft_putchar((char)va_arg(args, int));
                if (res == -1)
                    return -1;
                count++;
            }
            else if (*format == 'd')
            {
                int res = ft_itoa(va_arg(args, int));
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == 'x' || *format == 'X')
            {
                int res = ft_puthex(va_arg(args, unsigned int), *format);
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == 'u')
            {
                int res = ft_put_unsigned_int(va_arg(args, unsigned int));
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == 'p')
            {
                int res = ft_putadress(va_arg(args, void *));
                if(res == -1)
                    return -1;
                count += res;
            }
            else if (*format == '\0')
                return (count);
            else
            {
                if (*format == '%')
                {
                    int res = ft_putchar('%');
                    if (res == -1)
                        return -1;
                    count++;
                }
                else
                {
                    int res = ft_putchar(*format);
                    if (res == -1)
                        return -1;
                    count++;
                }
            }
        }
        else
        {
            int res = ft_putchar(*format);
            if (res == -1)
                return -1;
            count++;
        }
        format++;
    }

    va_end(args);
    return (count);
}

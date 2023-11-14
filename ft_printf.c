/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:07:16 by youchen           #+#    #+#             */
/*   Updated: 2023/11/14 20:25:05 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include <stdarg.h>

int ft_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                char *str = va_arg(args, char *);
                while (*str != '\0')
                {
                    ft_putchar(*str);
                    str++;
                }
            }
            else if (*format == 'd')
            {
                int num = va_arg(args, int);
                ft_putnbr(num);
            }
            else
            {
                if(*format == '%')
                {
                    putchar('%');
                }
                else
                {
                   putchar(*format);
                }
            }
        }
        else
        {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
    return 0;
}

int main() {
    //my_printf("hello %% %s my name is %s my age is","world","yassine",20);
    //ft_printf("my age is % ");
    printf("hello world %s world\n","hello");
    ft_printf("hello world %s world\n","hello");
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:07:16 by youchen           #+#    #+#             */
/*   Updated: 2023/11/17 15:05:21 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(int f, int *count)
{
	int	res;

	res = f;
	if (res == -1)
		return (-1);
	*count += res;
	return (0);
}

int	print_format_specifier(const char *format, va_list args, int *count)
{
	int	res;

	if (*format == 's')
		return (check(ft_putstr(va_arg(args, char *)), count));
	else if (*format == 'i' || *format == 'd')
		return (check(ft_itoa(va_arg(args, int)), count));
	else if (*format == 'c')
		return (check(ft_putchar(va_arg(args, int)), count));
	else if (*format == 'x' || *format == 'X')
		return (check(ft_puthex(va_arg(args, unsigned int),*format), count));
	else if (*format == 'u')
		return (check(ft_put_unsigned_int(va_arg(args, unsigned int)), count));
	else if (*format == 'p')
		return (check(ft_putadress(va_arg(args, void *)), count));
	else 
	{
		res = ft_putchar(*format);
		if (res == -1)
			return (-1);
		*count += res;
		return (0);
	}
	if (res == -1)
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (count);
			if (print_format_specifier(format, args, &count) == -1)
				return (-1);
		}
		else
		{
			count += ft_putchar(*format);
			if (count == -1)
				return (-1);
		}
		format++;
	}
	va_end(args);
	return (count);
}

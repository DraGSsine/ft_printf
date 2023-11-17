/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:04:22 by youchen           #+#    #+#             */
/*   Updated: 2023/11/17 12:08:58 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_puthex(unsigned long long nb, char X);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printf(const char *format, ...);
int	ft_itoa(long int number);
int	ft_put_unsigned_int(unsigned long number);
int	ft_putadress(void *add);
int	ft_strlen(char *s);

#endif

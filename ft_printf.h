/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:42:11 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 13:32:29 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

int	ft_puthex(unsigned long long nb,char X);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_printf(const char *format, ...);
int ft_itoa(long int number);
int ft_put_unsigned_int(unsigned long number);
int ft_putadress(void *add);
int ft_strlen(char *s);
#endif

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

# ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

void	ft_puthex(uintptr_t nb,char X);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(const char *s);
int     ft_printf(const char *format, ...);
void	ft_itoa(int n);
void    ft_put_unsigned_int(unsigned int n);
void    ft_putpointer(void *ptr);

#endif

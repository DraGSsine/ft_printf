/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:00:07 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 13:45:22 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:17:48 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 11:18:14 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_length(unsigned int number)
{
	size_t	len;

	len = 0 ;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}
#include <stdio.h>
void ft_put_unsigned_int(unsigned int n)
{
	int			len;
	char		*str;
	long int	number;

	number = n;
	len = num_length(number);
	str = malloc(len + 1);
	if (str == NULL)
		return ;
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	while (number != 0)
	{
		len--;
		str[len] = '0' + (number % 10);
		number /= 10;
	}
	ft_putstr(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:17:48 by youchen           #+#    #+#             */
/*   Updated: 2023/11/15 13:45:22 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_num_length(int number)
{
	size_t	len;

	if (number <= 0)
		len = 1;
	else
		len = 0 ;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

void	ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	number;

	number = n;
	len = get_num_length(number);
	str = malloc(len + 1);
	if (str == NULL)
		return ;
	str[len] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	else if (number == 0)
		str[0] = '0';
	while (number != 0)
	{
		len--;
		str[len] = '0' + (number % 10);
		number /= 10;
	}

	ft_putstr(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:17:48 by youchen           #+#    #+#             */
/*   Updated: 2023/11/17 11:05:02 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>

int	get_num_length(long int number)
{
	int	len;

	len = 1;
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number > 9)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*convert_number_to_str(long int number, int len)
{
	char	*str;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	else if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number != 0)
	{
		str[--len] = '0' + (number % 10);
		number /= 10;
	}
	return (str);
}

int	ft_itoa(long int number)
{
	int		len;
	char	*str;
	int		res;

	len = get_num_length(number);
	str = convert_number_to_str(number, len);
	if (str == NULL)
		return (-1);
	len = ft_strlen(str);
	res = ft_putstr(str);
	free(str);
	if (res == -1)
		return (-1);
	return (len);
}

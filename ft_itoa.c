/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:17:48 by youchen           #+#    #+#             */
/*   Updated: 2023/11/16 22:03:17 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int get_num_length(int number)
{
	size_t len;

	if (number <= 0)
		len = 1;
	else
		len = 0;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

#include <stdlib.h>

void *ft_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL)
		return NULL;
	return ptr;
}

int ft_itoa(long int number)
{
	int len = get_num_length(number);

	char *str = ft_malloc(len + 1);
	if (str == NULL)
		return -1;
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

	len = ft_strlen(str);
	int res = ft_putstr(str);
	free(str);

	if (res == -1)
		return -1;

	return len;
}

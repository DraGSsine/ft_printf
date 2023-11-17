/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:00:07 by youchen           #+#    #+#             */
/*   Updated: 2023/11/16 22:15:52 by youchen          ###   ########.fr       */
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

int	get_length(unsigned int number)
{
	size_t	len;

	len = 0 ;
	if (number == 0)
		len = 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

void	*my_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

int	ft_put_unsigned_int(unsigned long number)
{
	int		len;
	char	*str;
	int		res;

	len = get_length(number);
	str = my_malloc(len + 1);
	if (str == NULL)
		return (-1);
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	while (number != 0)
	{
		len--;
		str[len] = '0' + (number % 10);
		number /= 10;
	}
	len = ft_strlen(str);
	res = ft_putstr(str);
	free(str);
	if (res == -1)
		return (-1);
	return (len);
}

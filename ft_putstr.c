/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchen <youchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:17:17 by youchen           #+#    #+#             */
/*   Updated: 2023/11/17 00:21:03 by youchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	str_len;
	int	res;

	str_len = ft_strlen(s);
	if (s == NULL)
	{
		res = ft_putstr("(null)");
		if (res == -1)
			return (-1);
		return (6);
	}
	else if (!s)
		return (0);
	while (*s)
	{
		res = ft_putchar(*s);
		if (res == -1)
			return (-1);
		s++;
	}
	return (str_len);
}

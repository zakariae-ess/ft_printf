/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:29:33 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/21 00:10:19 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	index;
	int		total;

	index = 0;
	total = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[index])
	{
		if (ft_check_char((char *)str + index) == -1)
			return (-1);
		if (!ft_check_char((char *)str + index)
			|| (ft_check_char((char *)str + index) == 2 && ++index))
			total += write(1, (char *)str + index++, 1);
		else
		{
			total += ft_convert(str[++index], args);
			index++;
		}
	}
	return (total);
}
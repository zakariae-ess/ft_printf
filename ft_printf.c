/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:29:33 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 17:29:52 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		total;
	int		val;

	total = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (*str)
	{
		val = ft_check_char(str);
		if (val == -1)
			return (-1);
		if (val == 0 || (str++ && val == 2))
			val = write(1, str, 1);
		else
			val = ft_convert(*str, &args);
		if (val == -1)
			return (-1);
		total += val;
		str++;
	}
	va_end(args);
	return (total);
}

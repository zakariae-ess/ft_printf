/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 21:02:56 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 16:33:02 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(unsigned char c, va_list *args)
{
	char	str[2];

	str[0] = '%';
	str[1] = c;
	if (c == 'c')
		return (ft_put_char(va_arg(*args, int)));
	if (c == 's')
		return (ft_put_str(va_arg(*args, char *)));
	if (c == 'p')
		return (ft_put_ptr(va_arg(*args, unsigned long long)));
	if (c == 'd' || c == 'i')
		return (ft_put_nbr(va_arg(*args, int)));
	if (c == 'u')
		return (ft_put_unbr(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (ft_put_hex(va_arg(*args, unsigned int)));
	if (c == 'X')
		return (ft_put_uhex(va_arg(*args, unsigned int)));
	return (write(1, str, 1));
}

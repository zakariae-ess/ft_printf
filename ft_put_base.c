/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 22:56:22 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/21 12:03:07 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_base(unsigned long long num, char *base, unsigned int len, int n)
{
	char	c;

	if (num >= len)
	{
		n += ft_put_base(num / len, base, len, n);
	}
	c = base[num % len];
	if (write(1, &c, 1) != -1)
		n++;
	return (n);
}

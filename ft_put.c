/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 21:58:52 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 18:02:09 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long long p)
{
	int	val;

	if (p == 0)
	{
		return (ft_put_str("(nil)"));
	}
	if (write(1, "0x", 2) != 2)
		return (-1);
	val = ft_put_base(p, "0123456789abcdef", 16);
	if (val == -1)
		return (-1);
	return (val + 2);
}

int	ft_put_nbr(int nbr)
{
	int	sign;
	int	val;

	sign = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		sign = write(1, "-", 1);
		if (sign == -1)
			return (-1);
		nbr = -nbr;
	}
	val = ft_put_base(nbr, "0123456789", 10);
	if (val == -1)
		return (-1);
	return (sign + val);
}

int	ft_put_unbr(unsigned int num)
{
	return (ft_put_base(num, "0123456789", 10));
}

int	ft_put_hex(unsigned int n)
{
	return (ft_put_base(n, "0123456789abcdef", 16));
}

int	ft_put_uhex(unsigned int n)
{
	return (ft_put_base(n, "0123456789ABCDEF", 16));
}

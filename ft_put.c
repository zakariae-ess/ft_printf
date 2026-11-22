/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 21:58:52 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 10:01:56 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long long p)
{
	int	total;

	total = 0;
	if (p == 0)
	{
		return (ft_put_str("(nil)"));
	}
	total += write(1, "0x", 2);
	total += ft_put_base(p, "0123456789abcdef", 16, 0);
	return (total);
}

int	ft_put_nbr(int nbr)
{
	int	total;

	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	total = 0;
	if (nbr < 0)
	{
		total += write(1, "-", 1);
		nbr = -nbr;
	}
	total += ft_put_base(nbr, "0123456789", 10, 0);
	return (total);
}

int	ft_put_unbr(unsigned int num)
{
	return (ft_put_base(num, "0123456789", 10, 0));
}

int	ft_put_hex(unsigned int n)
{
	return (ft_put_base(n, "0123456789abcdef", 16, 0));
}

int	ft_put_uhex(unsigned int n)
{
	return (ft_put_base(n, "0123456789ABCDEF", 16, 0));
}

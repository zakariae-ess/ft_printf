/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 22:56:22 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/20 23:09:39 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_base(long long num, char *base, int len, int n)
{
	char	c;
	
	if (num >= len){
		ft_put_base(num / len, base, len, n);
	}
	c = base[num % len];
	n += write(1, &c, 1);
	return (n);
}
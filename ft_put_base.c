/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 22:56:22 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 17:43:41 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long num, int len)
{
	int	num_len;

	num_len = 1;
	while (num / len != 0)
	{
		num_len++;
		num = num / len;
	}
	return (num_len);
}

int	ft_put_base(unsigned long long num, char *base, unsigned int len)
{
	int					i;
	int					num_len;
	char				*p;

	num_len = ft_len(num, len);
	p = malloc(num_len * sizeof(char) + 1);
	if (p == NULL)
		return (-1);
	*(p + num_len) = '\0';
	i = num_len;
	while (i > 0)
	{
		i--;
		*(p + i) = base[num % len];
		num = num / len;
	}
	if (write(1, p, num_len) != num_len)
		num_len = -1;
	free(p);
	return (num_len);
}

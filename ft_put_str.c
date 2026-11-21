/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 21:31:35 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/21 10:19:53 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_put_str(char *s)
{
	int	total;

	total = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		if (write(1, s, 1) == -1)
			return (total);
		total++;
		s++;
	}
	return (total);
}

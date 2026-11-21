/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:22:11 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/20 23:41:43 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *, ...);
int ft_check_char(void *p);
int ft_convert(unsigned char c, va_list args);
int ft_put_str(char *s);
int ft_put_char(char c);
int ft_put_base(long long num, char *base, int len, int n);
int ft_put_ptr(long long);
int	ft_put_nbr(int nbr);
int	ft_put_unbr(unsigned int num);
int	ft_put_hex(long long n);
int	ft_put_HEX(long long n);

#endif

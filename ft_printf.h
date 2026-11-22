/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:22:11 by zessalih          #+#    #+#             */
/*   Updated: 2026/11/22 10:04:30 by zessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_check_char(char *p);
int	ft_convert(unsigned char c, va_list args);
int	ft_put_str(char *s);
int	ft_put_char(char c);
int	ft_put_base(unsigned long long num, char *base, unsigned int len, int n);
int	ft_put_ptr(unsigned long long p);
int	ft_put_nbr(int nbr);
int	ft_put_unbr(unsigned int num);
int	ft_put_hex(unsigned int n);
int	ft_put_uhex(unsigned int n);

#endif

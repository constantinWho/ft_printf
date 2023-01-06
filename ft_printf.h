/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chustei <chustei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:07:36 by chustei           #+#    #+#             */
/*   Updated: 2022/12/28 11:55:14 by chustei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
int		ft_putptr(unsigned long long n);
int		ft_putnbr(long long int n);
int		ft_puthex(unsigned long long n, char c);
int		ft_putchar(char c);
int		ft_intlen(long long int n);
int		ft_putstrrev(char *str, unsigned long long i);
int		ft_find_type(va_list args, char type);
char	*ft_long_itoa(long long int n);

#endif

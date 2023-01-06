/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chustei <chustei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:58:03 by chustei           #+#    #+#             */
/*   Updated: 2022/12/28 10:40:18 by chustei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int	i;

	if (!n)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	i = 2;
	i = ft_puthex(n, 'x') + i;
	return (i);
}

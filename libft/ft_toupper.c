/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chustei <chustei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:22:17 by chustei           #+#    #+#             */
/*   Updated: 2022/12/11 20:18:54 by chustei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main()
{
	char c = '9';
	printf("%c turns in %c | %c\n", c, ft_toupper(c), toupper(c));
	c = 'h';
	printf("%c turns in %c | %c\n", c, ft_toupper(c), toupper(c));
	return (0);
}
 */

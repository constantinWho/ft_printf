/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chustei <chustei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:18:30 by chustei           #+#    #+#             */
/*   Updated: 2022/12/14 15:12:02 by chustei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	else if (((char *)dest) > ((char *)src))
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (++i < n)
			((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}

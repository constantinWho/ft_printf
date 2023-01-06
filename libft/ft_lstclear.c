/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chustei <chustei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:31:01 by chustei           #+#    #+#             */
/*   Updated: 2022/12/13 19:40:25 by chustei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	if (!lst)
		return ;
	while (*lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = clear;
	}
}

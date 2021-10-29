/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:33:57 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/13 17:38:22 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (alst && *alst)
	{
		lst = *alst;
		while (lst->next)
		{
			lst = lst->next;
		}
		lst->next = new;
	}
	else if (alst)
		*alst = new;
}

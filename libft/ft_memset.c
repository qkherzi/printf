/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:48:24 by qkherzi           #+#    #+#             */
/*   Updated: 2021/03/29 17:52:07 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	size_t			j;
	unsigned char	*ludo;

	j = 0;
	ludo = (unsigned char *)b;
	while (j < len)
	{
		ludo[j] = c;
		j++;
	}
	return (b = ludo);
}

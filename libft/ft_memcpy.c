/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:05:43 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/11 16:57:47 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	if (!dest && !src)
		return (0);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	while (n > 0)
	{	
		*ptrdest++ = *ptrsrc++;
		n--;
	}
	return (dest);
}

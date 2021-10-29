/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:19:05 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/01 15:39:40 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] && a + b < len)
	{
		if (haystack[a + b] == needle[b])
		{
			if (needle[++b] == '\0')
				return ((char *) haystack + a);
		}
		else
		{
			b = 0;
			a++;
		}
	}
	return (NULL);
}

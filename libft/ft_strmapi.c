/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:31:32 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/02 18:42:17 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*done;

	if (!s)
		return (NULL);
	done = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!done)
		return (NULL);
	if (s)
	{
		len = 0;
		while (*(s + len) != '\0')
		{
			*(done + len) = f(len, *(s + len));
			len++;
		}
		*(done + len) = '\0';
	}
	return (done);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:56:44 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/06 16:45:38 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s1;
	int		len;
	int		i;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	s1 = malloc(sizeof(char) * len + 1);
	if (!s1)
		return (0);
	while (src[i])
	{
		s1[i] = src[i];
		i++;
	}	
	s1[i] = '\0';
	return (s1);
}

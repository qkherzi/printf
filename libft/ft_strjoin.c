/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:58:09 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/06 15:08:37 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*str;
	int		goubi;
	int		goulba;

	if (!s1 || !s2)
		return (0);
	goubi = ft_strlen(s1);
	goulba = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (goubi + goulba + 1));
	if (str == 0)
		return (NULL);
	ft_memcpy(str, s1, goubi);
	ft_memcpy(str + goubi, s2, goulba);
	str[goubi + goulba] = '\0';
	return (str);
}

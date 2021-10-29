/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:12:29 by qkherzi           #+#    #+#             */
/*   Updated: 2021/04/06 16:46:23 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buff[12];
	int		i;
	int		val;

	i = 11;
	buff[i--] = 0;
	if (!n)
		buff[i--] = '0';
	val = n;
	if (n < 0)
		n = -n;
	if (n < 0)
		return (ft_strdup("-2147483648"));
	while (n)
	{
		buff[i--] = n % 10 + '0';
		n /= 10;
	}
	if (val < 0)
		buff[i--] = '-';
	return (ft_strdup(buff + i + 1));
}

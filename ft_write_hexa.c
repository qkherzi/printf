/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 00:35:30 by qkherzi           #+#    #+#             */
/*   Updated: 2021/10/13 00:36:08 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_hexa(unsigned int arg, int base, t_printf *env)
{
	char	tmp[21];
	int		i;
	int		j;

	i = 20;
	tmp[i--] = '\0';
	if (arg == 0)
		tmp[i--] = '0';
	while (arg)
	{
		j = arg % base;
		if (j > 9)
			tmp[i--] = j + 'a' - 10;
		else
			tmp[i--] = j + '0';
		arg /= base;
	}
	ft_putstr(tmp + i + 1, env);
}

void	ft_write_hexap(unsigned long long arg, int base, t_printf *env)
{
	char	tmp[21];
	int		i;
	int		j;

	i = 20;
	tmp[i--] = '\0';
	if (arg == 0)
		tmp[i--] = '0';
	while (arg)
	{
		j = arg % base;
		if (j > 9)
			tmp[i--] = j + 'a' - 10;
		else
			tmp[i--] = j + '0';
		arg /= base;
	}
	tmp[i--] = 'x';
	tmp[i--] = '0';
	ft_putstr(tmp + i + 1, env);
}

void	ft_write_uphexa(unsigned int arg, int base, t_printf *env)
{
	char	tmp[21];
	int		i;
	int		j;

	i = 20;
	tmp[i--] = '\0';
	if (arg == 0)
		tmp[i--] = '0';
	while (arg)
	{
		j = arg % base;
		if (j > 9)
			tmp[i--] = j + 'A' - 10;
		else
			tmp[i--] = j + '0';
		arg /= base;
	}
	ft_putstr(tmp + i + 1, env);
}

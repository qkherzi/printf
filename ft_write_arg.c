/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:31:18 by qkherzi           #+#    #+#             */
/*   Updated: 2021/10/13 00:57:50 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conv(const char c, t_printf *env)
{
	if (c == 'c')
		ft_putchar(va_arg(env->args, int), env);
	else if (c == 's')
		ft_putstr(va_arg(env->args, char *), env);
	else if (c == 'd' || c == 'i')
		ft_write_int(va_arg(env->args, int), 10, env, c);
	else if (c == 'u')
		ft_putnbr_base(va_arg(env->args, unsigned int), 10, env);
	else if (c == 'x')
		ft_write_hexa(va_arg(env->args, unsigned int), 16, env);
	else if (c == 'p')
		ft_write_hexap(va_arg(env->args, unsigned long), 16, env);
	else if (c == 'X')
		ft_write_uphexa(va_arg(env->args, unsigned int), 16, env);
}

void	ft_write_int(long long arg, int base, t_printf *env, char c)
{
	if (c == 'd' || c == 'i')
	{
		if (arg < 0)
			ft_putchar('-', env);
		ft_putnbr_base(arg, base, env);
	}
}

int	ft_is_type(const char c)
{
	if (c == 'p' || c == 'c' || c == 's' || c == 'x' || c == 'X'
		|| c == 'd' || c == 'u' || c == 'i')
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(long long arg, int base, t_printf *env)
{
	if (base == 10)
	{
		if (arg < 0)
			arg *= -1;
		if (arg < base)
			ft_putchar(arg + '0', env);
		else
		{
			ft_putnbr_base(arg / base, base, env);
			ft_putchar((arg % base) + '0', env);
		}
	}
}

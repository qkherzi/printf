/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:29:45 by qkherzi           #+#    #+#             */
/*   Updated: 2021/10/13 00:56:47 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_struct(t_printf *env)
{
	env->returnvalue = 0;
}

int	ft_printf(const char *format, ...)
{
	t_printf	env;

	ft_init_struct(&env);
	va_start(env.args, format);
	ft_parse_format(format, &env);
	va_end(env.args);
	return (env.returnvalue);
}

void	ft_putchar(char c, t_printf *env)
{
	write(1, &c, 1);
	env->returnvalue += 1;
}

void	ft_parse_format(const char *format, t_printf *env)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_is_type(format[i]) == 1)
				ft_conv(format[i], env);
			else
				ft_putchar(format[i], env);
		}
		else
			ft_putchar(format[i], env);
		i++;
	}
}

void	ft_putstr(char *str, t_printf *env)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{	
		ft_putchar(str[i], env);
		i++;
	}
}

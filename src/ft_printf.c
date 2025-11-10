/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:21:14 by toespino          #+#    #+#             */
/*   Updated: 2025/11/10 19:38:54 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	ft_misc(char *str, va_list arg)
{
	int	out;

	out = 1;
	if (*str == 'c')
		out = ft_putchar_f(va_arg(arg, int));
	else if (*str == 's')
		out = ft_putstr_f(va_arg(arg, char *));
	else if (*str == 'X' || *str == 'x')
		out = ft_puthexa_f(va_arg(arg, int), *str == 'X');
	else if (*str == 'd' || *str == 'i')
		out = ft_putnbr_f(va_arg(arg, int));
	else if (*str == 'u')
		out = ft_putunbr_f(va_arg(arg, unsigned int));
	else if (*str == 'p')
		out = ft_puthexa_f(va_arg(arg, int), 0);
	else
		str--;
	str++;
	return (out);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '%')
		{
			len += ft_putchar_f(*str++);
			str++;
		}
		else if (*str == '%')
		{
			str++;
			len += ft_misc((char *)str, args);
		}
		else
		{
			len += ft_putchar_f(*str);
			str++;
		}
	}
	va_end(args);
	return (len);
}

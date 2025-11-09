/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:21:14 by toespino          #+#    #+#             */
/*   Updated: 2025/11/09 10:41:23 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	ft_misc(char *str, void *arg, int *len)
{
	int	out;

	out = 1;
	if (*str == 'c')
		out = ft_putchar_f((char)*arg, len);
	else if (*str == 's')
		out = ft_putstr_f((char *)arg, len);
	else if (*str == 'X' || *str == 'x')
		out = ft_puthexa_f((int)*arg, len, *str == 'X');
	else if (*str == 'd' || *str == 'i')
		out = ft_putnbr_f((int)*arg, len);
	else if (*str == 'u')
		out = ft_putunbr_f((unsigned int)*arg, len);
	else if (*str == 'p')
		out = ft_puthexa_f((int)arg, len,);
	else
		str--;
	str++;
	return (out);
}

int	ft_printf(const char *str, ...)
{
	int		*len;
	va_list	*args;

	*len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '%')
		{
			str++;
			ft_putchar(*str, len);
			str++;
		}
		else if (*str == '%')
		{
			str++;
			ft_misc(str, va_args(args, void), len);
		}
		else
			str += ft_putchar(*str, len);
	}
	va_end(args);
	return (*len);
}

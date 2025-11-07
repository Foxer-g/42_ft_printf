/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:02:24 by toespino          #+#    #+#             */
/*   Updated: 2025/11/07 14:47:27 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_f(int arg, int *len, int flag)
{
	int		out;
	char	*lst;

	out = 0;
	if (flag == 1)
		lst = "0123456789ABCDEF";
	else
		lst = "0123456789abcdef";
	if (n < 0)
	{
		out += ft_putchar_('-', len);
		if (n < -15)
			out += ft_puthexa_f((n / 16) * -1, len, flag);
		out += ft_puthexa_f((n % 16) * -1, len ,flag);
	}
	else if (n > 15)
	{
		out += ft_puthexa_f(n / 16, len, flag);
		out += ft_puthexa_f(n % 16, len, flag);
	}
	else
		out += ft_putchar_f(str[n], len);
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:02:24 by toespino          #+#    #+#             */
/*   Updated: 2025/11/10 19:39:58 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthexa_f(int arg, int flag)
{
	int		out;
	char	*lst;

	out = 0;
	if (flag == 1)
		lst = "0123456789ABCDEF";
	else
		lst = "0123456789abcdef";
	if (arg < 0)
	{
		out += ft_putchar_f('-');
		if (arg < -15)
			out += ft_puthexa_f((arg / 16) * -1, flag);
		out += ft_puthexa_f((arg % 16) * -1, flag);
	}
	else if (arg > 15)
	{
		out += ft_puthexa_f(arg / 16, flag);
		out += ft_puthexa_f(arg % 16, flag);
	}
	else
		out += ft_putchar_f(lst[arg]);
	return (out);
}

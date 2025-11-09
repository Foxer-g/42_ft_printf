/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:02:32 by toespino          #+#    #+#             */
/*   Updated: 2025/11/09 10:42:35 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_f(int n, int *len)
{
	int out;

	out = 0;
	if (n < 0)
	{
		out += ft_putchar_f('-', len);
		if (n < -9)
			out += ft_putnbr_f((n / 10) * -1, len);
		out += ft_putnbr_f((n % 10) * -1, len);
	}
	else if (n > 9)
	{
		out += ft_putnbr_f(n / 10, len);
		out += ft_putnbr_f(n % 10, len);
	}
	else
		out += ft_putchar_f(n + 48, len);
	return (out);
}

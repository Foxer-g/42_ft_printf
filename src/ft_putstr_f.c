/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:03:39 by toespino          #+#    #+#             */
/*   Updated: 2025/11/07 09:26:40 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_f(char *arg, int *len)
{
	int	i;
	int	out;
	
	i = 0;
	out = 0;
	while (arg[i])
	{
		out += ft_putchar(arg[i], len);
		i++;
	}
	return (out);
}

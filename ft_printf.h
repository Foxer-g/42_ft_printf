/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 10:32:11 by toespino          #+#    #+#             */
/*   Updated: 2025/11/09 10:45:15 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_f(char c, int *len);
int	ft_puthexa_f(int arg, int *len, int flag);
int	ft_putnbr_f(int n, int *len);
int	ft_putstr_f(char *arg, int *len);

#endif

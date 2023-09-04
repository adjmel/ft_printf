/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:47:15 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:48:48 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char *str)
{
	int	i;

	i = 0;
	if (str[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i] == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (str[i] == 'p')
		return (ft_putpointer(va_arg(args, unsigned long)));
	else if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str[i] == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (str[i] == 'x')
		return (ft_puthexmin(va_arg(args, unsigned int)));
	else if (str[i] == 'X')
		return (ft_puthexmaj(va_arg(args, unsigned int)));
	else if (str[i] == '%')
		return (ft_putchar('%'));
	else
	{
		return (ft_putchar('%'), ft_putchar(str[i]), 2);
	}
}

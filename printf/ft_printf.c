/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:10:30 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:46:51 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		counter;
	int		length;
	va_list	args;

	counter = 0;
	length = 0;
	va_start(args, str);
	while (str[counter] != '\0')
	{
		if (str[counter] == '%' && str[counter + 1] != '\0')
		{
			length += ft_formats(args, &str[counter + 1]);
			counter++;
		}
		else
		{
			if (str[counter] == '%' && str[counter + 1] == '\0')
				break ;
			length += ft_putchar(str[counter]);
		}
		counter++;
	}
	va_end(args);
	return (length);
}

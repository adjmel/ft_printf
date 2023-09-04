/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:55:20 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 17:02:35 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_puthexmaj(unsigned long nb);
int	ft_puthexmin(unsigned long nb);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_putpointer(unsigned long nb);
int	ft_putstr(const char *str);
int	ft_formats(va_list args, const char *str);

#endif

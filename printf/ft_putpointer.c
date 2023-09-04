/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:38:26 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/13 10:40:35 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putpointer(unsigned long ptr)
{
	int	length;

	length = 0;
	if (ptr == 0)
	{
		return (ft_putstr("(nil)"));
	}
	else if (ptr > 0)
	{
		length += (ft_putstr("0x") + ft_puthexmin (ptr));
	}
	return (length);
}

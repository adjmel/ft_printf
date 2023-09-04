/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:11:30 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:57:45 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	forreturn;

	forreturn = 0;
	if (nb > 9)
		forreturn += ft_putnbr_u (nb / 10);
	forreturn += ft_putchar (48 + nb % 10);
	return (forreturn);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:09:45 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:56:38 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	forreturn;

	forreturn = 0;
	if (nb == -2147483648)
	{
		forreturn += ft_putnbr (nb / 10);
		forreturn += ft_putchar ('8');
	}
	else if (nb < 0)
	{
		forreturn += ft_putchar ('-');
		forreturn += ft_putnbr (-nb);
	}
	else
	{
		if (nb > 9)
			forreturn += ft_putnbr (nb / 10);
		forreturn += ft_putchar (48 + nb % 10);
	}
	return (forreturn);
}

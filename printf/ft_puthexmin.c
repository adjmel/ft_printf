/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:36:31 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:54:57 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_printf.h"

int	ft_puthexmin(unsigned long nb)
{
	char	*tabhexa;
	int		forreturn;

	forreturn = 0;
	tabhexa = "0123456789abcdef";
	if (nb >= 16)
		forreturn += ft_puthexmin (nb / 16);
	forreturn += ft_putchar (tabhexa[nb % 16]);
	return (forreturn);
}

/*int     main ()
  {
  ft_puthexmin(4570);
  }*/

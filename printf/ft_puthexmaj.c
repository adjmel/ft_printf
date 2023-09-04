/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madjogou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:37:35 by madjogou          #+#    #+#             */
/*   Updated: 2022/12/12 16:53:24 by madjogou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_printf.h"

int	ft_puthexmaj(unsigned long nb)
{
	char	*tabhexa;
	int		forreturn;

	forreturn = 0;
	tabhexa = "0123456789ABCDEF";
	if (nb >= 16)
		forreturn += ft_puthexmaj (nb / 16);
	forreturn += ft_putchar (tabhexa[nb % 16]);
	return (forreturn);
}

/*int     main ()
  {
  ft_puthexmaj(4570);
  }*/

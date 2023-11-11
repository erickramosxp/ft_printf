/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:31:42 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 12:55:35 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printhex(const char c, int nb)
{
	if (nb > 16)
	{
		ft_printhex(c, nb / 16);
		ft_printhex(c, nb % 16);
	}
	else if (nb >= 10)
	{
		if (c == 'X')
			ft_putchar(nb + 55);
		else
			ft_putchar(nb + 87);
	}
	else
		ft_putchar(nb + '0');
}
/*
int	main(void)
{
	ft_printhex('X', 2347);
}*/

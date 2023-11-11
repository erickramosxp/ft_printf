/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:31:42 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 20:17:46 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_hex(unsigned long long nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_printhex(const char c, unsigned long long nb)
{
	int	len;

	len = count_hex(nb);
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
	return (len);
}
/*
int	main(void)
{
	ft_printhex('X', 2347);
}*/

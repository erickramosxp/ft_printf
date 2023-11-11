/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:03:27 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 14:57:52 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int     ft_printhexp(int nb)
{
        if (nb > 16)
        {
                ft_printhexp(nb / 16);
                ft_printhexp(nb % 16);
        }
        else if (nb >= 10)
        {
		ft_putchar(nb + 87);
        }
        else
                ft_putchar(nb + '0');
}

int     ft_printpoint(int nb)
{
        write(1, "0x", 2);
        ft_printhexp(nb);
}
/*
int	main(void)
{
	void	*a;
	char	*b;

	a = (void)&b;

	ft_printpoint(a);
}*/

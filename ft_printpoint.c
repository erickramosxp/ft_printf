/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:03:27 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 17:53:07 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     count_hex2(int nb)
{
        int     i;

        i = 0;
        while (nb != 0)
        {
                nb = nb / 16;
                i++;
        }
        return (i);
}

int     ft_printhexp(int nb)
{
	int	len;

	len = count_hex2(nb);
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
	return (len);
}

int     ft_printpoint(int nb)
{
	int	len;

	len = 2;
        write(1, "0x", 2);
        len += ft_printhexp(nb);
	return (len);
}
/*
int	main(void)
{
	void	*a;
	char	*b;

	a = (void)&b;

	ft_printpoint(a);
}*/

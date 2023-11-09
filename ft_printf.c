/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:46:03 by erramos           #+#    #+#             */
/*   Updated: 2023/11/09 20:39:23 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
        va_list args;
        int     i;

        va_start(args, s);
        i = 0;
        while (s[i] != '\0')
        {
                if (s[i] == '%' && s[i + 1] == 'c')
                {
                        ft_putchar(va_arg(args, int));
			i++;
                }
                else if (s[i] == '%' && s[i + 1] == 's')
                {
                        ft_putstr(va_arg(args, char *));
			i++;
                }
		else if (s[i] == '%' && s[i + 1] == 'd')
		{
			ft_putstr(ft_itoa(va_arg(args, int)));
			i++;
		}
                else
                {
                        ft_putchar(s[i]);
                }
                i++; // Somente incrementa o ponteiro uma vez
        }
        va_end(args);
}

int main()
{
        char a = 'w';
        char *s = "Olá, mundo!";
	int	c;
	
	c = 5555;
        ft_printf("a = %c s = %s c = %d", a, s, c);

        return 0;
}

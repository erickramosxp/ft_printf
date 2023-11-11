/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:46:03 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 14:56:21 by erramos          ###   ########.fr       */
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
		if (s[i] == '%' && s[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
		}
		else if (s[i] == '%' && s[i + 1] == 'c')
                {
                        ft_putchar(va_arg(args, int));
			i++;
                }
                else if (s[i] == '%' && s[i + 1] == 's')
                {
                        ft_putstr(va_arg(args, char *));
			i++;
                }
		else if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i'))
		{
			ft_putstr(ft_itoa(va_arg(args, int)));
			i++;
		}
		else if (s[i] == '%' && s[i + 1] == 'x' || s[i + 1] == 'X')
		{
			ft_printhex(s[i + 1], va_arg(args, int));
			i++;
		}
		else if (s[i] == '%' && s[i + 1] == 'p')
		{
			ft_printpoint(va_arg(args, int));
			i++;
		}
                else
                {
			if (s[i] != '%')
                        	ft_putchar(s[i]);
                }
                i++;
        }
        va_end(args);
}

int main()
{
        char a = 'w';
        char *s = "Olá, mundo!";
	int	c;
	
	c = 155;
        ft_printf("pointer = %p // s = %s // c = %X // %% = %", &a, s, c);

        return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:46:03 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 22:55:26 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
        va_list args;
        int     i;
	int	len;

        va_start(args, s);
        i = 0;
	len = 0;
        while (s[i] != '\0')
        {
		if (s[i] == '%' && s[i + 1] == '%')
		{
			len += ft_putchar('%');
			i++;
		}
		else if (s[i] == '%' && s[i + 1] == 'c')
                {
                        len += ft_putchar(va_arg(args, int));
			i++;
                }
                else if (s[i] == '%' && s[i + 1] == 's')
                {
                        len += ft_putstr(va_arg(args, char *));
			i++;
                }
		else if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i'))
		{
			len += ft_printnb(va_arg(args, int));
			i++;
		}
		else if (s[i] == '%' && (s[i + 1] == 'x' || s[i + 1] == 'X'))
		{
			len += ft_printhex(s[i + 1], va_arg(args, unsigned long long));
			i++;
		}
		else if (s[i] == '%' && s[i + 1] == 'p')
		{
			len += ft_printpoint(va_arg(args, unsigned long long));
			i++;
		}
		else if(s[i] == '%' && s[i + 1] == 'u')
		{
			len += ft_printu(va_arg(args, unsigned int));
			i++;
		}
                else
                {
			if (s[i] != '%')
                        	len += ft_putchar(s[i]);
                }
                i++;
        }
        va_end(args);
	return (len);
}
/*
int main()
{
        char a = 'w';
        char *s = "Olá, mundo!";
	int	c;
	
	c = 155;
        ft_printf("pointer = %d // s = %s // c = %X // %% = %", 155, s, c);

        return 0;
}*/

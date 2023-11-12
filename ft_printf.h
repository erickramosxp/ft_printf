/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:51:41 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 22:40:07 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_printhex(const char c, unsigned long long nb);
int     ft_printpoint(unsigned long long nb);
int     ft_printnb(int nb);
int	ft_printu(unsigned int nb);

#endif
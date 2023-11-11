/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:51:41 by erramos           #+#    #+#             */
/*   Updated: 2023/11/11 17:08:30 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_printhex(const char c, int nb);
int     ft_printpoint(int nb);
int     ft_printnb(int nb);

#endif

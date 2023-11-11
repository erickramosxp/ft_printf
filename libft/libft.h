/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:32 by erramos           #+#    #+#             */
/*   Updated: 2023/11/09 19:10:47 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

char    *ft_itoa(int n);
void    ft_putchar(char c);
void    ft_putstr(char *s);
size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s);

#endif

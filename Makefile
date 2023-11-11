# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erramos <erramos@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:45:17 by erramos           #+#    #+#              #
#    Updated: 2023/11/11 15:27:53 by erramos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = cc -Wall -Wextra -Werror

FILES =	ft_printf.c ft_printhex.c ft_printpoint.c \
	libft/ft_itoa.c libft/ft_putchar.c libft/ft_putstr.c \
	libft/ft_strdup.c libft/strlen.c

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	$(CFLAGS) -I. -c $(FILES)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

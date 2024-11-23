# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaugero <afaugerou@42.fr>                    +#+  +:+       +#+      #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 14:40:40 by afaugero          #+#    #+#              #
#    Updated: 2024/11/23 16:59:03 by afaugero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT= libft/libft.a
CC = gcc
INCLUDES = includes

SRC = ft_printf \
	  ft_parse \
	  ft_parse_char \
	  ft_parse_str \
	  ft_parse_void \
	  ft_parse_int \
	  ft_parse_udec \
	  ft_parse_hex_low \
	  ft_parse_hex_up \

SRCS = $(addsuffix .c, ${SRC})

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: makelib $(NAME)

%.o: %.c
	${CC} $(CFLAGS) -c $< -o $@ -I ${INCLUDES}

$(NAME): $(OBJECTS)
	cp ${LIBFT} ${NAME}
	ar rcs $(NAME) $(OBJECTS)

makelib: 
	make -C libft all

clean:
	make -C libft clean
	rm -f $(OBJECTS)

fclean: clean
	rm -f ${LIBFT}
	rm -f $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re

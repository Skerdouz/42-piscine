# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murasakinx <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 22:58:10 by murasakinx        #+#    #+#              #
#    Updated: 2024/02/25 22:58:15 by murasakinx       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = srcs/ft_dict_init.c srcs/ft_dict.c srcs/ft_intstr.c srcs/ft_print.c srcs/ft_split.c srcs/ft_strdup.c srcs/ft_tenpower.c srcs/main.c
OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I includes

${NAME}: ${OBJS}
	cc ${CFLAGS} ${SRCS} -o ${NAME}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean 
		rm -f ${NAME}

re: fclean all
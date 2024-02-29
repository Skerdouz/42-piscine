NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

${NAME}: ${OBJS}
	ar rvs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean 
		rm -f ${NAME}

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martin <martin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 20:48:35 by martin            #+#    #+#              #
#    Updated: 2020/11/21 20:59:12 by martin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS1 = ft_atoi.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_memset.c ft_bzero.c ft_isdigit.c ft_isalpha.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strrchr.c ft_strchr.c
SRCS2 = ft_substr.c ft_strjoin.c
SRCSB = 
OBJS1 = ${SRCS1:.c=.o}
OBJS2 = ${SRCS2:.c=.o}
OBJSB = ${SRCSB:.c=.o}
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

$(NAME): ${OBJS1} ${OBJS2}
	ar -rcs libft.a ${OBJS1} ${OBJS2}
.c.o:
	gcc $(FLAGS) -c $< -o $@

all: ${NAME}

bonus: ${OBJSB}
	ar -rcs libft.a ${OBJSB}
clean:
	rm -f ${OBJS1} ${OBJS2} ${OBJSB}
fclean: clean
	rm -f libft.a
	rm -f libft.so

re: fclean all

so:
	gcc *.c -c -fPIC
	gcc *.o -shared -o libft.so
	make clean

.PHONY: all clean fclean re so bonus

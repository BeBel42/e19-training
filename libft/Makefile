# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martin <martin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 20:48:35 by martin            #+#    #+#              #
#    Updated: 2020/11/26 18:09:19 by martin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS1 = ft_atoi.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_memset.c ft_bzero.c ft_isdigit.c ft_isalpha.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strrchr.c ft_strchr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c
SRCS2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c
SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS1 = ${SRCS1:.c=.o}
OBJS2 = ${SRCS2:.c=.o}
OBJSB = ${SRCSB:.c=.o}
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

$(NAME): ${OBJS1} ${OBJS2}
	ar -rcs ${NAME} ${OBJS1} ${OBJS2}

.c.o:
	gcc $(FLAGS) -c $< -o $@

all: ${NAME}

bonus: ${OBJS1} ${OBJS2} ${OBJSB}
	ar -rcs ${NAME} ${OBJS1} ${OBJS2} ${OBJSB}

clean:
	rm -f ${OBJS1} ${OBJS2} ${OBJSB}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus

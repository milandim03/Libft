# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milandim <milandim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 13:50:48 by milandim          #+#    #+#              #
#    Updated: 2023/11/08 14:37:13 by milandim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror -Iincludes

SRC = ./ft_bzero.c ./ft_atoi.c ./ft_calloc.c ./ft_isalpha.c ./ft_memchr.c ./ft_memcmp.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_isalnum.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c ./ft_strlen.c ./ft_tolower.c ./ft_toupper.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c
COMP = ${SRC:.c=.o}
BONUS = ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c
BCOMP = ${BONUS:.c=.o}
NAME = libft.a

all: ${NAME}

${NAME}:  ${COMP}
	ar rcs ${NAME} ${COMP}
	ranlib ${NAME}

bonus:	${BCOMP}
	ar rcs ${NAME} ${BCOMP}
	ranlib ${NAME}
	
clean:
	rm -f ${COMP} ${BCOMP}

fclean: clean
	rm -f ${NAME}

re: fclean all

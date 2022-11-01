# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:13:05 by eamghar           #+#    #+#              #
#    Updated: 2022/10/28 18:35:40 by eamghar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
HEADER = libft.h

SRC = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_itoa.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

SRC_B = ft_lstsize.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJ =	$(SRC:.c=.o)
OBJ_B =	$(SRC_B:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all :	$(NAME)

bonus : $(OBJ_B)
		ar -rsc $(NAME) $(OBJ_B)

$(NAME) : $(OBJ)
		ar -rsc $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all

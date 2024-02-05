# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 20:24:52 by vsivanat          #+#    #+#              #
#    Updated: 2024/02/05 21:03:18 by vsivanat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c\
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_strlen_c.c \
ft_free_arr.c

SRCBONUS = \
ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c

OBJ = $(SRC:%.c=%.o)

OBJBONUS =$(SRCBONUS:%.c=%.o)

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all bonus compile archive clean fclean re

$(NAME): all

all: compile archive

bonus: $(OBJBONUS)
	ar -rcs $(NAME) $(OBJBONUS)

compile: $(OBJ)

archive:
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

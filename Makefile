# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsivanat <vsivanat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 20:24:52 by vsivanat          #+#    #+#              #
#    Updated: 2024/04/12 16:26:32 by vsivanat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = \
ft_atof.c \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_free_arr.c \
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
ft_tolower.c \
ft_toupper.c \
ft_printf.c \
ft_print_cases.c \
ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c \
ft_strlower.c \
ft_strupper.c

NAME = libft.a

COMPILER = cc
CFLAGS = -c -Wall -Wextra -Werror -I.
RM = rm -f

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

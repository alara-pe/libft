# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 20:22:06 by alara-pe          #+#    #+#              #
#    Updated: 2023/06/26 19:55:17 by alara-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_atoi \
		ft_bzero \
		ft_calloc \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		ft_strdup \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_substr \
		ft_tolower \
		ft_toupper \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

Header = libft.h

objects = $(SOURCE:=.o)

Compilator = gcc

Flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SOURCE:=.o)
	ar rc $(NAME) $(SOURCE:=.o)
	ranlib $(NAME)

%.o: %.c

	$(Compilator) $(Flags) -c $< -o $@

clean:
	rm -f $(SOURCE:=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re







# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: czavalet <czavalet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 12:08:04 by czavalet          #+#    #+#              #
#    Updated: 2023/04/02 17:05:31 by czavalet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC	= ft_isascii.c\
ft_isalpha.c\
ft_bzero.c\
ft_isalnum.c\
ft_isdigit.c\
ft_isprint.c\
ft_memset.c\
ft_strlen.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o : %.c
	@gcc $(-Wall -Werror -Wextra -g3 -fsaitize=address) -c -o $@ $<

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
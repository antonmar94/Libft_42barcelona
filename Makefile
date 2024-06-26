# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 18:14:54 by antonio-          #+#    #+#              #
#    Updated: 2024/06/26 18:34:37 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putstr_fd.c ft_putchar_fd.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c\
 			ft_strjoin.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c\
			ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_bzero.c ft_isalpha.c\
			ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c\
			ft_calloc.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlcpy.c\
			ft_strnstr.c ft_toupper.c ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)

$(OBJ_BONUS): $(SRC_BONUS)
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $^

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME) $(OBJ) $(OBJ_BONUS)

re: fclean all bonus

.PHONY: all clean fclean re

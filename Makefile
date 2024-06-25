# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 18:14:54 by antonio-          #+#    #+#              #
#    Updated: 2024/06/25 20:27:25 by antonio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putstr_fd.c ft_putchar_fd.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c\
 			ft_strjoin.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c\
			ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_bzero.c ft_isalpha.c\
			ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c\
			ft_calloc.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlcpy.c\
			ft_strnstr.c ft_toupper.c ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\n\033[0;35mCompiling libft..."
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@echo "\033[0m"

%.o: %.c
	@printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@
	@cc ${FLAGS} -c $< -o $@

bonus: $(OBJ_BONUS) $(OBJ)
	@echo "\n\n\033[0;35mCompiling libft..."
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@echo "\033[0m"

%.o: %.c
	@printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@
	@cc ${FLAGS} -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME) $(OBJ) $(OBJ_BONUS)

re: fclean all bonus

.PHONY: all clean fclean re

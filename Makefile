# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 12:42:44 by zlaarous          #+#    #+#              #
#    Updated: 2023/05/13 16:15:49 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.c \
					./mandatory/parsing.c \
					./mandatory/exit_error.c \
					./printf_stack.c \
					./mandatory/create_index.c \
					./mandatory/three_sort.c \
					./mandatory/forth_sort.c \
					./mandatory/five_sort.c \
					./mandatory/sort_big_algo.c \
					./mandatory/min_max.c \
					./mandatory/sorting.c \
					./mandatory/move1.c \
					./mandatory/move2.c \
					./mandatory/move3.c \
					./mandatory/move4.c \
					./mandatory/utils.c \
					./mandatory/tools_big_algo.c \
					./mandatory/ft_strcmp.c \
					./libft/ft_memset.c \
			  		./libft/ft_bzero.c \
			  		./libft/ft_memcpy.c \
			  		./libft/ft_memmove.c \
			  		./libft/ft_memcmp.c \
			  		./libft/ft_memchr.c \
			  		./libft/ft_strlen.c \
			  		./libft/ft_strlcpy.c \
			  		./libft/ft_strchr.c \
			  		./libft/ft_strnstr.c \
			  		./libft/ft_strrchr.c \
			  		./libft/ft_strncmp.c \
			  		./libft/ft_atol.c \
			  		./libft/ft_isalpha.c \
			  		./libft/ft_isdigit.c \
			  		./libft/ft_isalnum.c \
			  		./libft/ft_isascii.c \
			  		./libft/ft_isprint.c \
			  		./libft/ft_toupper.c \
			  		./libft/ft_tolower.c \
			  		./libft/ft_calloc.c \
			  		./libft/ft_strdup.c \
			  		./libft/ft_strlcat.c \
			  		./libft/ft_putchar_fd.c \
			  		./libft/ft_putstr_fd.c \
			  		./libft/ft_putendl_fd.c \
			  		./libft/ft_putnbr_fd.c \
			  		./libft/ft_striteri.c \
			  		./libft/ft_substr.c \
			  		./libft/ft_strjoin.c \
			  		./libft/ft_strtrim.c \
			  		./libft/ft_strmapi.c \
			  		./libft/ft_itoa.c \
			  		./libft/ft_split.c \

OBJES = $(SRCS:.c=.o)

NAME 		= push_swap
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -fsanitize=address -g
RM 			= rm -rf

%.o			:	%.c push_swap.h
				$(CC) ${CFLAGS} -c $< -o $@

all			:	$(NAME) $(FT_LIB)

$(NAME)		:	$(OBJES)
				@$(CC) $(CFLAGS) $(OBJES) -o $(NAME)
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

f			:	all clean
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

clean		:
				@$(RM) $(OBJES)
				clear
				@echo "\033[0;93m object files removed.\033[0m"

fclean		:	clean
				$(RM) $(NAME)
				clear
				@echo "\033[0;93mthe object files and the exicutable are removed.\033[0m"

re			:	clean all

.PHONY		:	all clean fclean re f
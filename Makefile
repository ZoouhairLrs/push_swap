# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 12:42:44 by zlaarous          #+#    #+#              #
#    Updated: 2023/05/18 00:17:38 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			░█▀▀█ ░█─░█ ░█▀▀▀█ ░█─░█ ░█▀▀▀█ ░█──░█ ─█▀▀█ ░█▀▀█
#			░█▄▄█ ░█─░█ ─▀▀▀▄▄ ░█▀▀█ ─▀▀▀▄▄ ░█░█░█ ░█▄▄█ ░█▄▄█
#			░█─── ─▀▄▄▀ ░█▄▄▄█ ░█─░█ ░█▄▄▄█ ░█▄▀▄█ ░█─░█ ░█───

SRCS		= 	./mandatory/main.c \
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

SRCS_BONUS	=	./bonus/main_checker.c \
					./bonus/parsing.c \
					./bonus/exit_error.c \
					./bonus/create_index.c \
					./bonus/three_sort.c \
					./bonus/forth_sort.c \
					./bonus/five_sort.c \
					./bonus/sort_big_algo.c \
					./bonus/min_max.c \
					./bonus/sorting.c \
					./bonus/move1.c \
					./bonus/move2.c \
					./bonus/move3.c \
					./bonus/move4.c \
					./bonus/utils.c \
					./bonus/tools_big_algo.c \
					./bonus/ft_strcmp.c \
					./bonus/get_next_line.c \
					./bonus/get_next_line_utils.c \

OBJES = $(SRCS:.c=.o)
OBJES_BONUS = $(SRCS_BONUS:.c=.o)
NAME 		= push_swap
CHECKER		= checker
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror	
RM 			= rm -rf

%.o			:	%.c push_swap.h
				$(CC) ${CFLAGS} -c $< -o $@

all			:	text $(NAME)

libft/libft.a:
	make -C libft

$(NAME)		:	$(OBJES) libft/libft.a
				@$(CC) $(CFLAGS) $(OBJES) libft/libft.a -o $(NAME)
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

$(CHECKER)	:	$(OBJES_BONUS) libft/libft.a ./include/push_swap_bonus.h
				@$(CC) $(CFLAGS) $(OBJES_BONUS) libft/libft.a -o $(CHECKER)
				clear
				@echo "\033[0;92m Bonus is ready.\033[0m"

bonus		: text $(CHECKER)

f			:	all clean
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

clean		:
				@$(RM) $(OBJES) $(OBJES_BONUS)
				clear
				@echo "\033[0;93m object files removed.\033[0m"

fclean		:	clean
				$(RM) $(NAME) $(CHECKER) libft/libft.a
				$(RM) libft/*.o
				clear
				@echo "\033[0;93mthe object files and the exicutable are removed.\033[0m"

re			:	clean all

text :
	@echo "\033[1;5;1;36m";
	@echo " ░█▀▀█ ░█─░█ ░█▀▀▀█ ░█─░█ ░█▀▀▀█ ░█──░█ ─█▀▀█ ░█▀▀█ "
	@echo " ░█▄▄█ ░█─░█ ─▀▀▀▄▄ ░█▀▀█ ─▀▀▀▄▄ ░█░█░█ ░█▄▄█ ░█▄▄█ "
	@echo " ░█─── ─▀▄▄▀ ░█▄▄▄█ ░█─░█ ░█▄▄▄█ ░█▄▀▄█ ░█─░█ ░█─── "
	@echo "\x1b[0m"

.PHONY		:	all clean fclean re f
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 10:43:35 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/06 10:52:06 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRCS	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		=	$(SRCS:.cpp=.o)
HEADERS		=	-I include

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

# Colors
DEFAULT		=	\033[39m
GREEN		=	\033[92m
MAGENTA		=	\033[95m
YELLOW		=	\033[33m
GRAY		=	\033[37m
RED			=	\033[91m
CLEAR		=	\e[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norme:
	@python3 -m norminette

.PHONY: all clean fclean re

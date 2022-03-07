# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 11:34:05 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/07 11:34:16 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out

SRCS		:= main.cpp Karen.cpp
OBJS		:= $(SRCS:.cpp=.o)
HEADERS		:= -I .

CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

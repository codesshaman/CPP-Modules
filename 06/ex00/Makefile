# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 11:55:58 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/20 12:45:32 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= convert

SRCS		:= srcs/main.cpp srcs/Converter.cpp srcs/utils.cpp

OBJS		:= $(SRCS:.cpp=.o)
HEADERS		:= -I include

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

test: $(NAME)
	sh test.sh

.PHONY: all clean fclean re

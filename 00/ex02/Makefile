# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:29:15 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/08 14:39:58 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

SRCS 	= Account.cpp tests.cpp
OBJS	= $(SRCS:.cpp=.o)
INCLUDE	= Account.hpp

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

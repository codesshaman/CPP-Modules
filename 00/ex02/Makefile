# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:29:15 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/06 16:36:19 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

SRCS 	= Account.cpp tests.cpp
OBJS	= $(SRCS:.cpp=.o)
INCLUDE	= Account.hpp

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

FILES	= Account.hpp tests.cpp 19920104_091532.log

all: $(FILES) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(FILES):
	wget https://projects.intra.42.fr/uploads/document/document/7885/Account.hpp --no-check-certificate
	wget https://projects.intra.42.fr/uploads/document/document/7886/19920104_091532.log --no-check-certificate
	wget https://projects.intra.42.fr/uploads/document/document/7887/tests.cpp --no-check-certificate

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(FILES)

re: fclean all

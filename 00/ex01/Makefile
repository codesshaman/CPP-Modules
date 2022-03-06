# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 12:07:05 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/06 16:33:10 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS 	= srcs/Contact.cpp srcs/PhoneBook.cpp srcs/main.cpp
OBJS	= $(SRCS:.cpp=.o)
HEADERS	= -I include

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(HEADERS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

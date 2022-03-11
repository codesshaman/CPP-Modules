# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 17:31:56 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/11 13:28:05 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out

SRCS		:= srcs/main.cpp \
				srcs/Animal.cpp \
				srcs/Brain.cpp \
				srcs/Cat.cpp \
				srcs/Dog.cpp \
				srcs/WrongAnimal.cpp \
				srcs/WrongCat.cpp

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

.PHONY: all clean fclean re

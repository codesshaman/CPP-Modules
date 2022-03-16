# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 14:30:23 by ugdaniel          #+#    #+#              #
#    Updated: 2022/03/16 16:34:07 by ugdaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a.out

SRCS		:= srcs/main.cpp srcs/Bureaucrat.cpp srcs/Form.cpp \
				srcs/PresidentialPardonForm.cpp srcs/RobotomyRequestForm.cpp \
				srcs/ShrubberyCreationForm.cpp srcs/Intern.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 18:58:07 by mabdelba          #+#    #+#              #
#    Updated: 2022/11/09 22:01:30 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp srcs/PhoneBook.cpp srcs/Contact.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

%.o : %.cpp includes/PhoneBook.hpp includes/Contact.hpp
		$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
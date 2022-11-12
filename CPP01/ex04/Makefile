# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 21:12:31 by mabdelba          #+#    #+#              #
#    Updated: 2022/11/12 17:45:22 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Sed

%.o : %.cpp 
		$(CC) $(CXXFLAGS) -c $<

$(NAME) : $(OBJ)
		$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME) *.replace



re : fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 17:03:53 by mabdelba          #+#    #+#              #
#    Updated: 2022/12/18 01:00:49 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp  

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serialization

%.o : %.cpp 
		$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
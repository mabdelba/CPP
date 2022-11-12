# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 19:40:25 by mabdelba          #+#    #+#              #
#    Updated: 2022/11/09 22:02:35 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ViolenceInutile

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
		$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
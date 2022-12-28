# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 14:27:56 by mabdelba          #+#    #+#              #
#    Updated: 2022/12/11 23:25:43 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp  Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = CoffeMaking

%.o : %.cpp  Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
		$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME) 

re : fclean all
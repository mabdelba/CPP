/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:50:44 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/02 18:50:50 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


	// Default constructor : ### canonical ###
WrongAnimal::WrongAnimal(): _type("WrongAnimal"){

	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

	// Parametrized constructor
WrongAnimal::WrongAnimal(std::string type) : _type(type){
	
	std::cout << "WrongAnimal parametrized constructor called" << std::endl;
	return ;
}

	// Copy constructor  : ### canonical ###
WrongAnimal::WrongAnimal(WrongAnimal const & src){
	
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}


	// Destructor		: ### canonical ###
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}
	// member function


void	WrongAnimal::makeSound() const{
	
	std::cout << "WrongAnimal sound !" << std::endl;
}

std::string	WrongAnimal::getType() const{

	std::cout << "funtion getType called" << std::endl;
	return this->_type;
}
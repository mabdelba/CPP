/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:47:39 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/16 16:40:49 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


	// Default constructor : ### canonical ###
AAnimal::AAnimal(): _type("AAnimal"){

	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

	// Parametrized constructor
AAnimal::AAnimal(std::string type) : _type(type){
	
	std::cout << "AAnimal parametrized constructor called" << std::endl;
	return ;
}

	// Copy constructor  : ### canonical ###
AAnimal::AAnimal(AAnimal const & src){
	
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

AAnimal & AAnimal::operator=(AAnimal const & rhs){
	
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}


	// Destructor		: ### canonical ###
AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}
	// member function

\
std::string	AAnimal::getType() const{

	std::cout << "funtion getType called" << std::endl;
	return this->_type;
}
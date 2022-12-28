/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:47:39 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/02 17:48:27 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


	// Default constructor : ### canonical ###
Animal::Animal(): _type("Animal"){

	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

	// Parametrized constructor
Animal::Animal(std::string type) : _type(type){
	
	std::cout << "Animal parametrized constructor called" << std::endl;
	return ;
}

	// Copy constructor  : ### canonical ###
Animal::Animal(Animal const & src){
	
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

Animal & Animal::operator=(Animal const & rhs){
	
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}


	// Destructor		: ### canonical ###
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}
	// member function


void	Animal::makeSound() const{
	
	std::cout << "Animal sound !" << std::endl;
}

std::string	Animal::getType() const{

	std::cout << "funtion getType called" << std::endl;
	return this->_type;
}
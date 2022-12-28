/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:06:34 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/03 18:17:27 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


	// Default constructor : ### canonical ###
Dog::Dog(){

	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

	// Copy constructor  : ### canonical ###
Dog::Dog(Dog const & src){
	
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

Dog & Dog::operator=(Dog const & rhs){
	
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}

	// Destructor		: ### canonical ###
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

	// member function 

void Dog::makeSound() const{

	std::cout << "Dog sound !" << std::endl;
}
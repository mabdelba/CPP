/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:09:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/03 18:17:05 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


	// Default constructor : ### canonical ###
Cat::Cat(){

	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}


	// Copy constructor  : ### canonical ###
Cat::Cat(Cat const & src){
	
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

Cat & Cat::operator=(Cat const & rhs){
	
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}

	// Destructor		: ### canonical ###
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const{
	
	std::cout << "Meaaaaoo !" << std::endl;
}
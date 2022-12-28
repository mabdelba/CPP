/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:09:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/05 16:58:19 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


	// Default constructor : ### canonical ###
Cat::Cat(){

	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
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
	if(this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this ;
}

	// Destructor		: ### canonical ###
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound() const{
	
	std::cout << "Meaaaaoo !" << std::endl;
}
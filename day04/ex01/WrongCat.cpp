/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:53:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/02 18:54:04 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


	// Default constructor : ### canonical ###
WrongCat::WrongCat(){

	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

	// Parametrized constructor
WrongCat::WrongCat(std::string type){
	
	std::cout << "WrongCat parametrized constructor called" << std::endl;
	this->_type = type;
	return ;
}

	// Copy constructor  : ### canonical ###
WrongCat::WrongCat(WrongCat const & src){
	
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

WrongCat & WrongCat::operator=(WrongCat const & rhs){
	
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this ;
}

	// Destructor		: ### canonical ###
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound() const{
	
	std::cout << "Wrong Meaaaaoo !" << std::endl;
}
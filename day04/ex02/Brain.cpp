/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:02:35 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/03 18:04:50 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


	// Default constructor : ### canonical ###
Brain::Brain(){

	std::cout << "Brain default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "idea";
	return ;
}

	// Copy constructor  : ### canonical ###
Brain::Brain(Brain const & src){
	
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

	// Assignation operator : ### canonical ###

Brain & Brain::operator=(Brain const & rhs){
	
	std::cout << "Brain assignation operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this ;
}


	// Destructor		: ### canonical ###
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}
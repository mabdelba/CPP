/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:33:53 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 15:57:59 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _raw(0){

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_raw = rhs._raw;
	return *this;
}

int	Fixed::getRawBits(void) const{
	
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
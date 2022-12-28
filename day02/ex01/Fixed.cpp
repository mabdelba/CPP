/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:56:18 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/24 19:40:45 by mabdelba         ###   ########.fr       */
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

Fixed::Fixed(int const n){
	
	std::cout << "Int constructor called" << std::endl;
	this->_raw = (n << _fraction);
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
		this->_raw = int(roundf(f * (1 << _fraction)));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = rhs._raw;
	return *this;
}

int	Fixed::getRawBits(void) const{
	
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float Fixed::toFloat(void) const{

	return float(this->_raw) / (1 << _fraction);
}

int Fixed::toInt(void) const{
	
	return (this->_raw >> _fraction);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}


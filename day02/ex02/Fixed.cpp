/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:33:53 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 17:42:05 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default destructor
Fixed::Fixed(): _raw(0){

	// std::cout << "Default constructor called" << std::endl;
	return;
}

//copy constructor

Fixed::Fixed(Fixed const &src){

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

// int constructor

Fixed::Fixed(int const n){
	
	// std::cout << "Int constructor called" << std::endl;
	this->_raw = (n << _fraction);
	return;
}

// float constructor

Fixed::Fixed(float const f)
{
	// std::cout << "Float constructor called" << std::endl;
		this->_raw = int(roundf(f * (1 << _fraction)));
}

// assignement operator

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = rhs._raw;
	return *this;
}

// getter

int	Fixed::getRawBits(void) const{
	
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

// setter

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

// member functions

float Fixed::toFloat(void) const{

	return float(this->_raw) / (1 << _fraction);
}

int Fixed::toInt(void) const{
	
	return (this->_raw >> _fraction);
}

// ostream operator

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

// comparison operators

bool Fixed::operator>(Fixed const &src) const{
	
	if(this->_raw > src._raw)
		return true;
	else
		return false;
}

bool Fixed::operator<(Fixed const &src) const{
	
	if(this->_raw < src._raw)
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const &src) const{
	
	if(this->_raw >= src._raw)
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const &src) const{
	
	if(this->_raw <= src._raw)
		return true;
	else
		return false;
}

bool Fixed::operator==(Fixed const &src) const{
	
	if(this->_raw == src._raw)
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const &src) const{
	
	if(this->_raw != src._raw)
		return true;
	else
		return false;
}

//arithmetic operators

Fixed Fixed::operator+(Fixed const &src)  const{

	return Fixed(this->_raw + src._raw);
}

Fixed Fixed::operator-(Fixed const &src)  const{

	return Fixed(this->_raw - src._raw);
}

Fixed Fixed::operator*(Fixed const &src)  const{
	
	Fixed tmp;

	tmp._raw  = this->_raw * src._raw >> _fraction;
	return tmp;
}

Fixed Fixed::operator/(Fixed const &src)  const{
	
	Fixed tmp;

	tmp._raw  = (this->_raw * (1 << _fraction)/ src._raw);
	return tmp;
}

//increment/decrement operators

Fixed & Fixed::operator++(void)
{
	this->_raw += 1;
	return *this;
}

Fixed & Fixed::operator--(void)
{
	this->_raw -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_raw += 1;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_raw -= 1;
	return tmp;
}

//static members

Fixed & Fixed::min(Fixed &a, Fixed &b){
	
	if(a._raw < b._raw)
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b){
	
	if(a._raw > b._raw)
		return a;
	else
		return b;
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b){
	
	if(a._raw < b._raw)
		return a;
	else
		return b;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b){
	
	if(a._raw > b._raw)
		return a;
	else
		return b;
}

// Destructor

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return;
}
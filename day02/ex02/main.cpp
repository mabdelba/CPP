/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:57:43 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/25 16:12:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	// Fixed a(5.05f), b(2), c;

	// c = a * b;
	// std::cout << "la valeur de _raw de a = " << a << std::endl;
	// std::cout << "la valeur de _raw de b = " << b << std::endl;
	// std::cout << "la valeur de _raw de c = " << c << std::endl;
	return 0;
}
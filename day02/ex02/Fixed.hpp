/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:45:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 17:41:57 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_raw;
		static const int	_fraction = 8;

	public:
		Fixed();									//canonical
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);						//canonical : copy constructor
		Fixed	 & operator=(Fixed const & rhs);		//canonical	: operator d'assignation
		~Fixed(void);									//canonical

		//getters :
		int	getRawBits(void) const;
		
		// setters				
		void setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		// comparison operators

		bool operator>(Fixed const &src) const;
		bool operator<(Fixed const &src) const;
		bool operator>=(Fixed const &src) const;
		bool operator<=(Fixed const &src) const;
		bool operator==(Fixed const &src) const;
		bool operator!=(Fixed const &src) const;

		//arithmetic operators

		Fixed operator+(Fixed const &src)  const;
		Fixed operator-(Fixed const &src)  const;
		Fixed operator*(Fixed const &src)  const;
		Fixed operator/(Fixed const &src)  const;

		//increment/decrement operators

		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		// static members

		static	Fixed & min(Fixed &a, Fixed &b);
		static Fixed const & min(Fixed const &a, Fixed const &b);
		static	Fixed & max(Fixed &a, Fixed &b);
		static Fixed const & max(Fixed const &a, Fixed const &b);
		
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
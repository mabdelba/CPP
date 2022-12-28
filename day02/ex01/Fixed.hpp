/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:55:24 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 16:00:41 by mabdelba         ###   ########.fr       */
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
		Fixed();										//canonical
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);						//canonical
		Fixed	 & operator=(Fixed const & rhs);		//canonical
		~Fixed(void);									//canonical

		//getters :
		int	getRawBits(void) const;
		
		// setters				
		void setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);





#endif
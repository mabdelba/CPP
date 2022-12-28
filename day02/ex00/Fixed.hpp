/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:45:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 15:56:24 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_raw;
		static const int	_fraction = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed	 & operator=(Fixed const & rhs);
		~Fixed();

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
};




#endif
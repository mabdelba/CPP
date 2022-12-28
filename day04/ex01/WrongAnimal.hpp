/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:46:33 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/02 19:10:38 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONG ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif
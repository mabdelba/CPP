/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:43:17 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/14 15:25:05 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:43:17 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/16 16:40:58 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
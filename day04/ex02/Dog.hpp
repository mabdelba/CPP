/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:53:49 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/05 14:31:22 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private: 
		Brain *_brain;

	public:
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog();

		void makeSound() const;
};

#endif
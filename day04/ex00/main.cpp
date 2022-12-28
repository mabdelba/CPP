/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:13:36 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/14 15:51:42 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "##################    Animal   ##################" <<
				std::endl << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		delete i;
		delete j;
		delete meta;
	}
	
	std::cout << std::endl <<"################## WrongAnimal ##################" << 
					std::endl << std::endl;

	{	
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	return 0;
}
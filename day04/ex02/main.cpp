/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:13:36 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/16 16:41:13 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	AAnimal *meta[8];
	int i;
	for (i = 0; i < 4; i++)
		meta[i] = new Cat();
	for (; i < 8; i++)
		meta[i] = new Dog();

	for(i = 0; i < 8; i++)
	{
		std::cout << i + 1 << " : "<< meta[i]->getType() << std::endl;
		meta[i]->makeSound();
	}
	for(i = 0; i < 8; i++)
		delete meta[i];
	
	// system("leaks Brain");
	return 0;
}
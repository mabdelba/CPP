/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:24:20 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/12 13:53:21 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){

}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if(!(this->_Weapon))
	{
		std::cout << this->_name << " attacks without weapon." << std::endl; 
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}


void	HumanB::setWeapon(Weapon &Weapon){

	this->_Weapon = &Weapon;
}
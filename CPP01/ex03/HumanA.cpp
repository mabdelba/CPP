/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:27:48 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/11 19:16:57 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon): _Weapon(Weapon), _name(name){

}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const{

	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
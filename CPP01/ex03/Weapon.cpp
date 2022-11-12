/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:00:45 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/11 17:07:11 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(){
	
}

std::string const&	Weapon::getType(void) const{

	return this->_type;
}

void	Weapon::setType(std::string type){

	this->_type = type;
}


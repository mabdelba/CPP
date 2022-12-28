/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:33:21 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/29 17:53:38 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Canonical Form :


		//  ### Default constructor ###

ClapTrap::ClapTrap(): _Name(""), _HitPoints(10),
		 _EnergyPoints(10), _AttackDamage(0){
			
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name):_Name(Name), _HitPoints(10),
		 _EnergyPoints(10), _AttackDamage(0){

	std::cout << "Parametrized constructor called" << std::endl;
	return ; 
}
		//  ### Copy constructor ###
ClapTrap::ClapTrap(ClapTrap const &src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

		//  ### Assignation operator ###
		
ClapTrap & ClapTrap::operator=(ClapTrap const &rhs){
	
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	return *this;
}

		//  ### Destructor ###

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return; 
}

// Member functions

void ClapTrap::attack(const std::string& target){
	
	if(this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		//this->_AttackDamage++;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target 
			<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap can't do anything" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount){
	

	if(this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " loses " << amount << " of hitpoints" <<  std::endl; 
		this->_HitPoints -= amount;
		if(this->_HitPoints < 0)
			this->_HitPoints = 0;
	}
	else
		std::cout << "ClapTrap can't do anything" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	
	if(this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " gets " << amount << " of hitpoints" << std::endl;
		this->_HitPoints += amount;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap can't do anything" << std::endl;
	
}
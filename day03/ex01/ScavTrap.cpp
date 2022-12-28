/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:02:42 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 22:45:00 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



// Canonical Form :


		//  ### Default constructor ###

ScavTrap::ScavTrap(){
			
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_Name = "";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string Name){

	std::cout << "ScavTrap Parametrized constructor called" << std::endl;
	this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return; 
}

		//  ### Copy constructor ###
ScavTrap::ScavTrap(ScavTrap const &src){

	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}

		//  ### Assignation operator ###
		
ScavTrap & ScavTrap::operator=(ScavTrap const &rhs){
	
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	return *this;
}

		//  ### Destructor ###

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return; 
}

// Member functions

void ScavTrap::attack(const std::string& target){
	
	if(this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		//this->_AttackDamage++;
		std::cout << "ScavTrap " << this->_Name << " attacks " << target 
			<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ScavTrap can't do anything" << std::endl;
}

void ScavTrap::guardGate(void){
	
	std::cout << "ScavTrap " << this->_Name << " is now on Gate kepper mode" << std::endl;
}
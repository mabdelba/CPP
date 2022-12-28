/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:42:00 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/29 18:50:05 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
// Canonical Form :


		//  ### Default constructor ###

FragTrap::FragTrap(){
			
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Name = "";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string Name){

	std::cout << "FragTrap Parametrized constructor called" << std::endl;
	this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return; 
}

		//  ### Copy constructor ###
FragTrap::FragTrap(FragTrap const &src){

	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}

		//  ### Assignation operator ###
		
FragTrap & FragTrap::operator=(FragTrap const &rhs){
	
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	return *this;
}

		//  ### Destructor ###

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return; 
}

// Member functions

void FragTrap::attack(const std::string& target){
	
	if(this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		//this->_AttackDamage++;
		std::cout << "FragTrap " << this->_Name << " attacks " << target 
			<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "FragTrap can't do anything" << std::endl;
}

void FragTrap::highFivesGuys(void){
	
	std::cout << "FragTrap " << this->_Name << " demande de high fives" << std::endl;
}
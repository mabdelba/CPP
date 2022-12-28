/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:49:20 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/22 02:00:16 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:
		std::string _Name;
		int 		_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	
	public:
		ClapTrap();									// canonical
		ClapTrap(std::string Name); 				
		ClapTrap(ClapTrap const & src); 			// canonical
		ClapTrap & operator=(ClapTrap const & rhs); // canonical
		~ClapTrap(); 								// canonical

		//member functions

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};




#endif
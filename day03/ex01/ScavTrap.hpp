/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:02:46 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/29 17:44:18 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									// canonical
		ScavTrap(std::string Name);					
		ScavTrap(ScavTrap const & src); 			// canonical
		ScavTrap & operator=(ScavTrap const & rhs); // canonical
		~ScavTrap(); 								// canonical

		//member functions

		void	guardGate(void);
		void	attack(const std::string & target);
};




#endif
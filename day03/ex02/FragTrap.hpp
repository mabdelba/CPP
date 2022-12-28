/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:30:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/29 18:32:30 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();									// canonical
		FragTrap(std::string Name);					
		FragTrap(FragTrap const & src); 			// canonical
		FragTrap & operator=(FragTrap const & rhs); // canonical
		~FragTrap(); 								// canonical

		//member functions

		void	highFivesGuys(void);
		void	attack(const std::string & target);
};

#endif
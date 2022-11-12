/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:24:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/11 19:06:09 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_Weapon;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();
		
		void	attack(void) const;
};


#endif
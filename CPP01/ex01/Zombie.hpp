/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:44:53 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 15:37:32 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);
		~Zombie();

		void	announce(void);
		void	set_name(std::string name);

};

Zombie* zombieHorde( int N, std::string name );
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:57:26 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 13:14:01 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie Zom1("42");
	Zombie	*Zom2 = newZombie("med");
	Zom1.announce();
	Zom2->announce();
	randomChump("1337");
	delete Zom2;
	return 0;
}
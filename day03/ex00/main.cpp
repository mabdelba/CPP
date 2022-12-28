/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:48:29 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/29 15:53:22 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	ClapTrap Instance = ClapTrap("Mohamed");
	Instance.attack("Abdelbar");
	Instance.attack("Abdelbar");
	Instance.takeDamage(9);
	Instance.beRepaired(1);
	Instance.attack("Abdelbar");
	Instance.takeDamage(9);
	Instance.attack("Abdelbar");
	Instance.takeDamage(1);
	Instance.beRepaired(10);
	Instance.attack("Ahmed");
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:48:29 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/13 22:45:29 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
	ScavTrap Instance("Mohamed");

	Instance.attack("Abdelbar");
	Instance.guardGate();
	return 0;
}
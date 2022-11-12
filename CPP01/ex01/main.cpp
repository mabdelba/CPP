/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:44:48 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 15:33:15 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	int	const N = 20;
	Zombie *New = zombieHorde(N, "Jaja");

	for(int i = 0; i < N; i++)
		New[i].announce();
	
	delete [] New;
	return 0;
}
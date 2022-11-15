/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:02:53 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/15 15:38:01 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	if(ac == 2)
	{
		Harl Harl;
		std::string	level(av[1]);
		std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int	i;
		for(i = 0; i < 4; i++)
		{
			if(level == tab[i])
				break ;
		}
		switch(i){
			case 0:
				Harl.complain(tab[0]);
				std::cout << std::endl;
			case 1:
				Harl.complain(tab[1]);
				std::cout << std::endl;
			case 2:
				Harl.complain(tab[2]);
				std::cout << std::endl;
			case 3:
				Harl.complain(tab[3]);
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:59:26 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/12 16:23:40 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	PhoneBook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Vous pouvez entrer une commande: ADD, SEARCH ou EXIT : ";
		if(!std::getline(std::cin, cmd))
			return 1;
		if(cmd == "ADD")
		{
			if(!PhoneBook.addcontact())
				return 1;
			std::cout << std::endl;
		}
		else if(cmd == "SEARCH")
		{
			PhoneBook.displaycontact();
			std::cout << std::endl;
		}
		else if(cmd == "EXIT")
			break;
		std::cout << std::endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:58:35 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 19:37:53 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "L'adresse de la string en mémoire: " << &str << std::endl;
	std::cout << "L'adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "L'adresse stockée dans stringREF: " << &stringREF <<std::endl;
	
	std::cout  << std::endl;
	std::cout << "La valeur de la string: " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF" << stringREF << std::endl;

	return 0;
}
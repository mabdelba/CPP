/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/21 19:46:11 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector <int> v;

	for(int i = 0; i <= 100; i++)
		v.push_back(1);

	try{
		std::cout << easyfind(v, 10) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Error" << std::endl;
	}
	
}
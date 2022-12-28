/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:39:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/18 00:55:07 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"



int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "invalid input !" << std::endl;
		return 1;
	}
	std::string str = av[1];
	if(!print_convert(str))
		std::cout << "Nothing to convert !" << std::endl;
	
	return 0;
}
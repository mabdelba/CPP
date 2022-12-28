/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:39:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 02:59:11 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void plusOne(int const &n) {

    std::cout << n + 1 << std::endl;
}

void printString(std::string const &s) {

    std::cout << s << std::endl;
}

int main()
{
	std::string tab[] = {"Mohamed", "Abdelbar", "1998"};
	int	arr[] = {6, 101, -1, 0};

	::iter(tab, 3, printString);
	std::cout << std::endl << "---------------" ;
	std::cout  << std::endl << std::endl;
	::iter(arr, 4, plusOne);
	
	return 0;
}
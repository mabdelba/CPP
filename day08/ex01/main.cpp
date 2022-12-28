/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/21 23:43:08 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	{
		std::cout <<"-------Test 1--------"<<std::endl;
		Span sp = Span(5);

		try{	
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			// sp.addNumber(115);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << "Error !" <<std::endl;
		}
	}
	{
		std::cout <<"-------Test 2--------"<<std::endl;
		std::vector<int> vect;
		for(int i = 0; i < 10; i++)
			vect.push_back(i*2);
		try
		{
			Span sp(10);
			sp.addSequence(vect.begin(), vect.end());
			for(size_t i = 0; i < vect.size(); i++)
				std::cout << vect[i] << "  ";
			std::cout << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Error !" << std::endl;
		}
	}


	return 0;
}
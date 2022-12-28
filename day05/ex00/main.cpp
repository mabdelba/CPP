/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/07 16:44:04 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat bureaucrat("Mohamed", 150);
	try
	{	
		std::cout << bureaucrat;
		bureaucrat.increment();
		std::cout << bureaucrat;
		bureaucrat.decrement();
		std::cout << bureaucrat;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
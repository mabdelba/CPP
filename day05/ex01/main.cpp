/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/15 18:40:48 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	std::cout << "############ Test 1 ############\n" << std::endl;

	Bureaucrat bureaucrat1("Mohamed", 150);
	Form  form("Form", 80, 80);
	bureaucrat1.signForm(form);

	std::cout << "############ Test 2 ############\n" << std::endl;
	Bureaucrat bureaucrat2("Abdelbar", 79);

	bureaucrat2.signForm(form);
	std::cout << std::endl;
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/11 21:11:26 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{

	{
        Bureaucrat bureaucrat("Mohamed", 115);
        ShrubberyCreationForm shrubbery;
        std::cout << std::endl;
		bureaucrat.executeForm(shrubbery);
        bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
        std::cout << std::endl;
    }
	return 0;
}
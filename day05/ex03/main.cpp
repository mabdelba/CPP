/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/12 15:35:19 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main()
{
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    { 
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    }
	return 0;
}
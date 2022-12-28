/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dynamic_Cast.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:47:06 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 21:49:07 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Parent {public : virtual ~Parent(){}};

class Child1 : public Parent{};

class Child2 : public Parent {};


int main()
{
	Child1 a;     		// Reference value
	Parent	*b = &a;	// Implicit upcast -> Ok

	// explicit downcast -> suspens...
	Child1 * c = dynamic_cast<Child1*>(b);
	if(c == NULL)
		std::cout << "Conversion is NOT Ok" << std::endl;
	else
		std::cout << "Conversion is Ok" << std::endl;

	// explicit downcast -> suspens...

	try{

		Child2 & d= dynamic_cast <Child2 &> (*b);
		std::cout << "Conversion is Ok" << std::endl;
	}
	catch(std::bad_cast &bc){
		std::cout << "Conversion is NOT Ok" << std::endl;
	}
	
	return 0;
}
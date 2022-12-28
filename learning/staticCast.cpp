/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:41:39 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 19:18:12 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

/*

	static cast permet de faire la conversion simple entre des valeurs directes
	permet de realiser de upcast et de downcat

*/
// example 1

// int main()
// {
// 	int a = 42;  // reference value

// 	double b = a; // implicit promotion
	
// 	int c = b;		// implicit demotion	

// 	int d = static_cast<int>(b); // Explicit demotion

// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << d << std::endl;
	

// 	return 0;
// }



// example 2

class Parent {};
class Child1 : public Parent{};
class Child2 : public Parent{};

class Unrelated {};

int main()
{
	Child1 a;
	
	Parent * b = &a; // implicit upcast -> Ok

	// Child1 * c = b;	// implicit downcast -> Hell No !
	Child2 * d = static_cast<Child2 *> (b); // Explicit downcast -> Ok
	
	// Unrelated *e = static_cast<Unrelated *> (&a); // Explicit conversion -> No
	
}
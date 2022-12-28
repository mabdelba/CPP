/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpretedCat.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:08:48 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 22:22:23 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main()
{
	float a = 420.042f;   // Reference value;
	
	void * b = &a;   // implicit ->Ok
	int * c = reinterpret_cast<int *>(b); //Explicit demotion -> Ok
	int & d = reinterpret_cast<int &> (b); // Explicit demotion -> OK

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:39:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/18 21:39:24 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int x;
	float y;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){

	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data;
	data.x = 0;
	data.y = 4.2f;

	std::cout << "x = " << data.x << std::endl;
	std::cout << "y = " << data.y << std::endl << std::endl;

	uintptr_t serial = serialize(&data);

	Data *data2 = deserialize(serial);

	std::cout << "x = " << data2->x << std::endl;
	std::cout << "y = " << data2->y << std::endl;
	
	
	return 0;
}
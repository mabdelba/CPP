/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:39:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/20 23:00:21 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"




int main()
{
	{
		std::cout << "--------Test an array of int---------" << std::endl;
		Array<int> arr(6);
		try{
			for(unsigned int i = 0; i < arr.size(); i++)
			{
				arr[i] = (i*952) % 100;
				std::cout << arr[i] << std::endl;
			}
			std::cout << arr[80] << std::endl;
			std::cout << "It's good" << std::endl;
		}
		catch(std::exception & e){
			std::cout << "bad index" << std::endl;
		};
	}
	{
		std::cout << "--------Test an array of string---------" << std::endl;
		Array<std::string> arr(6);
		std::string a="+";
		try{
			for(unsigned int i = 0; i < arr.size(); i++)
			{
				a+="+";
				arr[i] = a;
				std::cout << arr[i] << std::endl;
			}
			std::cout << arr[80] << std::endl;
			std::cout << "It's good" << std::endl;
		}
		catch(std::exception & e){
			std::cout << "bad index" << std::endl;
			
		}
	}
	return 0;
}
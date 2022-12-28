/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:54:05 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 17:13:37 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int numberOfballs = 42;

	int *ballsPtr = &numberOfballs;
	int &ballsRef = numberOfballs;

	std::cout << numberOfballs << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfballs << std::endl;
	ballsRef = 84;
	std::cout << numberOfballs << std::endl;

	return 0;
}
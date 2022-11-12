/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:23:14 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/01 16:04:39 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for(int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}
	}
	std::cout << std::endl << std::endl;
	return 0;
}
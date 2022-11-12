/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:12:25 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/12 19:06:31 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string filename = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];

		std::ifstream	ifs(filename);
		std::ofstream ofs(filename + ".replace");
		std::string line;
		while(ifs.good())
		{
			std::getline(ifs, line);
			size_t	pos = line.find(s1);
			ofs << line;
			if(ifs.good())
				ofs << std::endl;
		}
		ifs.close();
		ifs.close();
	}
	else
		std::cout << "Number of arguments incorrect !" << std::endl;
	return 0;
}
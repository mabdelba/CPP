/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:12:25 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/12 23:21:30 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//substr

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string filename = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];

		std::ifstream	ifs(filename);
		if(!ifs.good())
		{
			std::cout << "Error: No file with name: " << filename << std::endl;
			return 1;
		}
		std::ofstream ofs(filename + ".replace");
		std::string line;
		while(ifs.good() && ofs.good())
		{
			std::getline(ifs, line);
			size_t	occ = line.find(s1);
			while(occ != std::string::npos)
			{
				line.erase(occ, s1.length());
				line.insert(occ, s2);
				occ = line.find(s1, occ + s1.length());
			}
			ofs << line;
			if(ifs.good())
				ofs << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	else
	{
		std::cout << "Error: Number of arguments incorrect !" << std::endl;
		return 1;
	}
	return 0;
}
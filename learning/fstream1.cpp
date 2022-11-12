/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:02:18 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/12 14:09:20 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main()
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();
	
	//-----------------------

	std::ofstream  ofs("test.out");
	
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
}
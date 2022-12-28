/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:17:59 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/09 19:05:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string	str = "I like butterflies";

	// by ptr
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	//by ref
	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
}

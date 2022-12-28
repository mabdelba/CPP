/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:42:16 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/18 00:54:02 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	is_pseudof(std::string s)
{
	if(s == "-inff" || s == "+inff" || s == "nanf")
		return true;
	return false;
}

bool	is_pseudod(std::string s)
{
	if(s == "-inf" || s == "+inf" || s == "nan")
		return true;
	return false;
}

void	reduce(std::string &s)
{
	for(int i = 0; i < static_cast<int>(s.length() - 1); i++)
		std::cout << s[i];
	std::cout << std::endl;
}

int		what_isType(std::string s)
{
	if(s.length() == 1 && (s[0] >= ' ' && s[0] <= '~') && !isdigit(s[0]))
		return 0;	// Char
	int i;
	for(i = 0; s[i]; i++)
	{	
		if(i==0 && ((s[i] == '-') || (s[i] == '+')))
			continue;
		if(!isdigit(s[i]))
			break;
	}
	if(i == static_cast<int>(s.length()))
		return 1;	// Int
	int flg = 0;
	for(i= 0;s[i]; i++)
	{
		if(i==0 && ((s[i] == '-') || (s[i] == '+')))
			continue;
		if(s[0] == '.' || s[s.length() - 1] == '.')
			break;
		if(!isdigit(s[i]) && s[i] != '.')
			break;
		if(s[i] == '.')
			flg++;
	}
	if(i == static_cast<int>(s.length()) && flg == 1)
		return 2;	// Double
	flg = 0;
	for(i = 0; s[i]; i++)
	{
		if(i==0 && ((s[i] == '-') || (s[i] == '+')))
			continue;
		if(s[0] == '.' || s[s.length() - 1] == '.' || s[s.length() - 1] != 'f')
			break;
		if(!isdigit(s[i]) && s[i] != '.' && i != static_cast<int>(s.length() - 1))
			break;
		if(s[i] == '.')
			flg++;	
	}
	if(i == static_cast<int>(s.length()) && flg == 1)
		return 3; // float
	if(is_pseudof(s))
		return 4; // pseudo
	if(is_pseudod(s))
		return 5; // pseudo
	return 6;  //other

}

void	printChar(std::string s, int type){

	if(type == 0)
		std::cout << "'" + s + "'" << std::endl;
	else if(type == 4 || type == 5)
		std::cout << "impossible" << std::endl;
	else
	{
		if(isprint(atoi(s.c_str())))
			std::cout << "'" << static_cast<char>(atoi(s.c_str())) << "'" <<std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}

}

void	printInt(std::string s, int type){
	
	if(type == 0)
		std::cout << static_cast<int>(s[0]) << std::endl;
	else if(type == 1)
		std::cout << s << std::endl;
	else if(type == 4 || type == 5)
		std::cout << "impossible" << std::endl;
	else
		std::cout << atoi(s.c_str()) << std::endl;

}

void	printFloat(std::string s, int type){
	
	if(type == 0)
		s = std::to_string(static_cast<int>(s[0]));
	if(type == 3 || type == 4)
		std::cout << s << std::endl;
	else if(type == 5)
		std::cout << s + "f" << std::endl;
	else
	{
		float f = std::strtof(s.c_str(), NULL);
		std::cout << f;
		if(f - static_cast<int> (f) == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
}

void	printDouble(std::string s, int type){
	
	if(type == 0)
		s = std::to_string(static_cast<int>(s[0]));
	if(type == 2 || type == 5)
		std::cout << s << std::endl;
	else if(type == 4)
		reduce(s);
	else
	{
		float d = std::strtod(s.c_str(), NULL);
		std::cout << d;
		if(d - static_cast<int> (d) == 0)
			std::cout << ".0" << std::endl;
	}
}


bool	print_convert(std::string &s)
{
	int type = what_isType(s);

	if(type == 6 || s == "")
		return false;
	std::cout << "char: ";printChar(s, type);
	
	std::cout << "int: ";printInt(s, type);
	
	std::cout << "float: ";printFloat(s, type);
	
	std::cout << "double: " ;printDouble(s, type) ;
	return true;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:31:00 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/05 13:42:56 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int		i = 0;
bool	drp = false;

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(){}

bool	fillbox(std::string *str, std::string buff)
{
	while (1)
	{
		std::cout << buff;
		if(!std::getline(std::cin, *str))
			return false;
		if(*str != "")
			break;	
	}
	return true;
}

bool	PhoneBook::addcontact(void){
	
	std::string	str;

	if(i == 8)
	{
		i = 0;
		drp = true;
	}
	std::cout << " #ADD : Ajouter un nouveau contact:" << std::endl;
	if(!fillbox(&str, "	-first name     : "))
		return false;
	this->contact[i].setfirstname(str);
	if(!fillbox(&str, "	-last name      : "))
		return false;
	this->contact[i].setlastname(str);
	if(!fillbox(&str, "	-nickname       : "))
		return false;
	this->contact[i].setnickname(str);
	if(!fillbox(&str, "	-phone number   : "))
		return false;
	this->contact[i].setnumber(str);
	if(!fillbox(&str, "	-darkest secret	: "))
		return false;
	this->contact[i].setsecret(str);
	i++;
	return true;
}

void	editstring(std::string str){

	int size;

	size = 10 - str.length();
	if(str.length() <= 10)
	{
		for(int z = 0; z < size; z++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for(int z=0; z < 9; z++)
			std::cout << str[z];
		std::cout << ".";
	}
}

bool	checkindex(std::string str)
{
	int k;

	for(k = 0; str[k]; k++)
	{
		if(!isdigit(str[k]))
			return false;
	}
	return true;
}

void	PhoneBook::searchcontact(void){

	int index, k = i;
	std::string buff;

	if(drp == true)
		k = 8;
	std::cout << std::endl << "=> Entrer l'index du contact à afficher: ";
	while(1)
	{
		if(!std::getline(std::cin, buff))
			exit(1);
		index = atoi(buff.c_str());
		index--;
		std::cout << std::endl;
		if(index >= 0 && index < k && checkindex(buff))
			break;
		std::cout << "=> Invalide index, Réessayer entre 1 et " << k << ": ";	
	}
	std::cout << "	-First name     : " << this->contact[index].getfirstname() << std::endl; 
	std::cout << "	-Last name      : " << this->contact[index].getlastname() << std::endl; 
	std::cout << "	-Nickname       : " << this->contact[index].getnickname() << std::endl; 
	std::cout << "	-Phone number   : " << this->contact[index].getnumber() << std::endl; 
	std::cout << "	-Darkest secret : " << this->contact[index].getsecret() << std::endl; 
}

void	PhoneBook::displaycontact(void){

	int	j, k;

	std::cout << " #SEARCH : Afficher le contact demandé:" << std::endl;
	std::cout << std::endl;
	std::cout << "	 ------------------------------------------- \n";
	std::cout << "	|     index|first name| last name|  nickname|\n";
	std::cout << "	 ------------------------------------------- \n";
	if(i == 0)
	{
		std::cout << std::endl << "Le répertoire est vide !\n";
		return ; 
	}
	k = i;
	if(drp == true)
		k = 8;
	for(j = 0; j < k; j++)
	{
		std::cout << "	|         " << j + 1 << "|";
		editstring(contact[j].getfirstname());
		std::cout << "|";
		editstring(contact[j].getlastname());
		std::cout << "|";
		editstring(contact[j].getnickname());
		std::cout << "|" << std::endl;
		std::cout << "	 ------------------------------------------- \n";
	}
	searchcontact();
}
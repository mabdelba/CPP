/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:40:04 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/05 13:31:45 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"


Contact::Contact(void){

	return ;
}

Contact::~Contact(){

	return ;
}

std::string	Contact::getfirstname(void) const{

	return(this->_firstname);
}

std::string	Contact::getlastname(void) const{

	return(this->_lastname);
}

std::string	Contact::getnickname(void) const{

	return(this->_nickname);
}

std::string	Contact::getnumber(void) const{

	return(this->_number);
}

std::string	Contact::getsecret(void) const{

	return(this->_secret);
}

void	Contact::setfirstname(std::string str){
	
	this->_firstname = str;
}

void	Contact::setlastname(std::string str){
	
	this->_lastname = str;
}

void	Contact::setnickname(std::string str){
	
	this->_nickname = str;
}

void	Contact::setnumber(std::string str){
	
	this->_number = str;
}

void	Contact::setsecret(std::string str){
	
	this->_secret = str;
}

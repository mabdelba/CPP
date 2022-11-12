/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exmpl2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:56:05 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/11 14:41:33 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Student
{
	private:
		std::string _login;

	public:
		Student(std::string const &login);
		~Student();
		
		//getter
		std::string &getLoginRef();
		std::string const &getLoginRefConst()const;
		std::string *getLoginPtr();
		std::string const *getLoginPtrConst() const;
};


Student::Student(std::string const &login) : _login(login){
	
}
Student::~Student(){}

std::string&	Student::getLoginRef(){
	
	return this->_login;
}

std::string const &	Student::getLoginRefConst() const{
	
	return this->_login;
}

std::string*	Student::getLoginPtr(){
	
	return &(this->_login);
}

std::string const*	Student::getLoginPtrConst() const{
	
	return &(this->_login);
}

int main()
{
	Student bob = Student("bfubar");
	Student const jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() <<std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	
	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	
	return 0;
}



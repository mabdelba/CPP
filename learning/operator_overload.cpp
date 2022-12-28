/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:16:51 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/24 16:17:25 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Integer
{
	private:
		int _n;
	public:
		Integer(int const n);
		~Integer(void);
		

		int getValue(void) const;

		Integer	& operator=(Integer const & rhs);
		Integer	  operator+(Integer const & rhs) const;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);


 Integer::Integer(int const n)
{
	std::cout << "Constructor called with value " << n << endl;
	return ;
}


 Integer::~Integer(void)
{
	cout << "Destructor called with value " << this->_n << endl;
	return ;
}

int	Integer::getValue(void)const{
	return this->_n;
}

Integer & Integer::operator=(Integer const & rhs){
	
	cout << "Assignation operator called from " << this->_n;
	cout << " to " << rhs.getValue() << endl;

	this->_n = rhs.getValue();
	return *this;
}

Integer	Integer ::operator+(Integer const & rhs) const{

	cout << "Addition operator called with " << this->_n;
	cout << " and " << rhs.getValue() << std::endl;

	return Integer (this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){
	
	o << rhs.getValue();
	return o;
}



int main()
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of x: " << x << endl;
	std::cout << "Value of y: " << y << endl;
	y = Integer(12);
	cout << "Value of y: " << y << endl;
	
	cout << "Value of z: " << z << endl;
	z = x + y;
	cout << "Value of z: " << z << endl;

	return 0;
	
}
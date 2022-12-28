/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonicalForm.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:56:19 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/23 20:23:54 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;



class Sample
{
private:
	int _foo;

public:
	Sample(void);  				//canonical
	Sample(int const n);
	Sample(Sample const & src);	//canonical
	~Sample();					//canonical

	Sample & operator=(Sample const & rhs); //canonical

	int getFoo(void) const;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

Sample::Sample(void):_foo(0)
{
	cout << "default construct called" << endl;
	return;
}

Sample::Sample(int const n): _foo(n){
	
	cout << "Parametric construct called\n";
	return;
}

Sample::Sample(Sample const & src)
{
	cout << "copy construct called\n";
	*this = src;
	return;
}


Sample::~Sample()
{
	cout << "destruct called" << endl;
	return;
}

int Sample::getFoo(void) const{

	return this->_foo;
}

Sample & Sample::operator=(Sample const & rhs){
	
	cout << "Assignement operator called\n";
	if(this != &rhs)
		this->_foo = rhs.getFoo();
	
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & i){
	
	o << "The value of _foo is: " << i.getFoo();
	
	return o;
}

int main()
{
	Sample instance1;
	Sample instance2(42);
	Sample instance3(instance1);

	cout << instance1 << endl;
	cout << instance2 << endl;
	cout << instance3 << endl;

	instance3 = instance2;
	cout << instance3 << endl;

	return 0;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_surFonc.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:02:15 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/14 23:26:25 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Sample
{
	public:

		int foo;
	
		Sample(void);
		~Sample();

		void bar(void) const;
};

Sample::Sample(void):foo(0)
{
	std::cout << "constructor called" << std::endl;
	return;
}

Sample::~Sample()
{
	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::bar(void)const{
	
	std::cout << "member function bar called" << std::endl;
	return;
}

int main()
{
	Sample instance;
	Sample *instancep = &instance;

	int Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;
	(instance.*f)();
	(instancep->*f)();
	return 0;
}



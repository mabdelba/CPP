/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:39:07 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 22:06:26 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {

    public:
        virtual ~Base(){};
};



class A : public Base {
	
};

class B : public Base {
	
};

class C : public Base {
	
};

Base *generate(void){
	
	int i = time(NULL) % 3;

	Base *ptr;
	std::cout << "generate: ";
	switch(i)
	{
		case 0 :
			std::cout << "A" << std::endl;
			ptr = new A();
			return ptr;
		case 1 :
			std::cout << "B" << std::endl;
			ptr = new B();
			return ptr;	
		case 2 :
			std::cout << "C" << std::endl;
			ptr = new C();
			return ptr;	
		default :
			return NULL;	
	}
}

void	identify(Base* p){

	std::cout << "The type is: ";
	
	if(dynamic_cast<A*> (p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "-" << std::endl;
}

void	identify(Base & p)
{
	A a; B b; C c;
	try {
        a = dynamic_cast<A&>(p);
        std::cout << "the Type is A" << std::endl;
    }
    catch (std::bad_cast & bc) {}
    try {
        b = dynamic_cast<B&>(p);
        std::cout << "the Type is B" << std::endl;
    }
    catch (std::bad_cast & bc) {}
    try {
        c = dynamic_cast<C&>(p);
        std::cout << "the Type is C" << std::endl;
    }
    catch (std::bad_cast & bc) {}
}

int main()
{
    Base *base;

	base = generate();
    
    std::cout << "Pointer: ";identify(base);
    std::cout << "Reference: ";identify(*base);

    delete base;
	
	return 0;
}
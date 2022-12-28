/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:09:38 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/26 19:17:46 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Cat
{
	private:
		int	_numberOfLegs;
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat & operator=(Cat const & rhs);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const & target);
};

class Pony
{
	private:
		int	_numberOfLegs;
	public:
		Pony(void);
		Pony(Pony const &src);
		Pony & operator=(Pony const & rhs);
		~Pony();

		void	run(int distance);
		void	doMagic(std::string const & target);
};

Pony::Pony(/* args */)
{
}

Pony::~Pony()
{
}


Cat::Cat(/* args */)
{
}

Cat::~Cat()
{
}




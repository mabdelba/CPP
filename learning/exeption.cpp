/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeption.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:23:45 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/05 13:38:14 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;


class A
{
	public :
		class NON_VALID : public exception
		{
			public :
			const char* what() const throw()
			{
				return "non valid";	
			}
		};
};


void test(int i)
{
	if(i == 0)
		throw A::NON_VALID();
}

int main()
{
	 try
	 {
		test(0);
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }	
}

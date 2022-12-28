/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:49:36 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/21 23:50:28 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<stack>
#include<deque>
#include<algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		typedef typename std::stack<T>::container_type::iterator iterator;
		
	iterator begin(){
		return (this->c.begin());
	}
	iterator end(){
		return(this->c.end());
	}
};

#endif
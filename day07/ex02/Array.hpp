/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:36:04 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/20 22:25:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include<array>

template<typename T>
class Array
{
	private:
		unsigned int _n;
		T * _array;
	public:
		// Constructors
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array & operator=(Array const & rhs);
		~Array();

		T & operator[](unsigned int index);

		unsigned int size() const;

};

template<typename T>
Array<T>::Array(): _array(new T[0]), _n(0){
}

template<typename T>
Array<T>::Array(unsigned int n):  _n(n), _array(new T[n]){
}

template<typename T>
Array<T>::Array(Array const & src){

	*this = src;
}



template<typename T> 
Array<T> & Array<T>::operator=(Array const & rhs){
	
	this->_n = rhs._n;
	if(_array)
		delete [] _array;
	this->_array = new T[rhs._n];
	for(int i=0; i<rhs._n;i++)
		this->_array[i]=rhs._array[i];
	return *this;
}

template<typename T>
T & Array<T>::operator[](unsigned int index){
	if(index >= this->_n)
		throw std::exception();
	return this->_array[index];
}

template<typename T>
unsigned int  Array<T>::size() const{

	return this->_n;
}

template<typename T>
Array<T>::~Array(){

	delete [] this->_array;
}



#endif
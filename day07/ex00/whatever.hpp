/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:36:04 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/21 16:14:18 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>




template <typename T>
void swap(T &a, T &b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
	if(a < b)
		return a;
	return b;
}

template <typename T>
T max(T &a, T &b)
{
	if(a > b)
		return a;
	return b;
}


#endif
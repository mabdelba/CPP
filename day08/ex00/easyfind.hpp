/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:21:03 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/21 19:26:44 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>

int easyfind(T &container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if(it == container.end())
		throw std::exception();
	
	return *it;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:36:04 by mabdelba          #+#    #+#             */
/*   Updated: 2022/12/19 02:56:33 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>

void iter(T *tab, size_t size, void(*f)(T const &)) {
    for (size_t i = 0; i < size; i++) {
        f(tab[i]);
    }
}


#endif
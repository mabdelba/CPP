/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flottant.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:59:40 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/21 13:49:37 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

// representation en virgule flottante varie d'une machie à l'autre.
// la plus courante c'est IEEE-754
// flottant : 4 octets Double : 8 octets 
// flottant a trois  composants :1 - un bit de signe (positif ou negatif)
//  2 - un exposant donnant son ordre de grandeur 
// 3- une mantisse specifiant les chiffres reels du nombre.
// 4 - seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm (s = sign bit, e = exponent , m = mantissa)

/*
	10000101 = -123		127 = 01111111	
	
	11111001 = -7		-56 = 11001000

	01010110 = 86		-86 = 10101010

	11101101 = -19		-61 = 11000011

	
	127.9375
	-0.0625
	7.125
	
	1101000000 111111

	1001101000 000110
*/

/*
	Fixed point :

	*Fixed point binary is used in digital signal processing.
	*Simpler and therfore cheaper processor hardware
	*greatly simplified arithmetic means much faster processing 
	*trade off between range and precision 
	*some numbers can never be represented accurately
*/

int main()
{
	
	return 0;
}
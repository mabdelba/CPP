/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchCase.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:39:30 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/15 15:45:29 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int day = 1;

	switch (day) {
	case 1:
		cout << "Monday\n";
		//break;
	case 2:
		cout << "Tuesday\n";
		//break;
	case 3:
		cout << "Wednesday\n";
		//break;
	case 4:
		cout << "Thursday\n";
		// break;
	case 5:
		cout << "Friday\n";
		// break;
	case 6:
		cout << "Saturday\n";
		// break;
	case 7:
		cout << "Sunday\n";
		// break;
	}

	return 0;
}
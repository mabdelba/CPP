/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:51:48 by mabdelba          #+#    #+#             */
/*   Updated: 2022/11/05 18:10:01 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
	public:
		PhoneBook(void);
		~PhoneBook();
		
		bool	addcontact(void);
		void	displaycontact(void);
		void	searchcontact(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:58:11 by mabdelba          #+#    #+#             */
/*   Updated: 2022/10/28 16:06:19 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
	
	public:
		Contact(void);
		~Contact();
		std::string	getfirstname(void) const;
		std::string	getlastname(void) const;
		std::string	getnickname(void) const;
		std::string	getnumber(void) const;
		std::string	getsecret(void) const;
		
		void	setfirstname(std::string str);
		void	setlastname(std::string str);
		void	setnickname(std::string str);
		void	setnumber(std::string str);
		void	setsecret(std::string str);
};

#endif

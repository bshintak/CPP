/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:51:43 by bshintak          #+#    #+#             */
/*   Updated: 2023/03/28 13:13:05 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "contacts.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
			Contact contacts[8];
			int		_num;
			// int		num_contact;
	public:
			// PhoneBook();
			// ~PhoneBook();
			void    welcome(void);
			void	addContact(void);
			void	searchContact(void);
			std::string	truncate(std::string string);
			int		strIsDigit(std::string string) const;
			std::string	table(int k);
			// showContact();
			// searchContact(int index);
};

#endif

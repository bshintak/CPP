/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:51:43 by bshintak          #+#    #+#             */
/*   Updated: 2023/03/28 17:30:51 by bshintak         ###   ########.fr       */
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
	public:
			// PhoneBook();
			// ~PhoneBook();
			void    welcome(void);
			void	addContact(void);
			void	searchContact(void);
			void    printTruncate(int i);
			void    printTable(std::string str);
			int		strIsDigit(std::string string) const;
			std::string	truncate(std::string string);
			std::string	table(int k);
};

#endif

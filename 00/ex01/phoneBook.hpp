/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:51:43 by bshintak          #+#    #+#             */
/*   Updated: 2023/05/24 12:42:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contacts.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
			int		_num;
			Contact contacts[MAX_CONTACTS];
	public:
			PhoneBook();
			~PhoneBook();
			void	AddContact(void);
			void	Welcome(void);
			void	SearchContact(void);
			void	PrintTruncate(int i);
			void	PrintTable(std::string str);
			int		StrIsDigit(std::string str) const;
			int		FakeAtoi(std::string str);
			std::string	Truncate(std::string str);
			std::string	Table(int k);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:51:43 by bshintak          #+#    #+#             */
/*   Updated: 2023/05/23 15:17:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contacts.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
			int		_num;
			Contact contacts[MAX_CONTACTS];
	public:
			PhoneBook();
			~PhoneBook();
			void	addContact(void);
			void	welcome(void);
			void	searchContact(void);
			void	printTruncate(int i);
			void	printTable(std::string str);
			int		strIsDigit(std::string str) const;
			int		ft_fake_atoi(std::string str);
			std::string	truncate(std::string str);
			std::string	table(int k);
};

#endif

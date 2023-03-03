/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:51:43 by bshintak          #+#    #+#             */
/*   Updated: 2023/03/03 19:37:49 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contacts.hpp"

class PhoneBook {
	private:
			Contact contacts[8];
			// int		num_contact;
	public:
			// PhoneBook();
			// ~PhoneBook();
			void    welcome(void);
			Contact	*addContact(void);
			void	searchContact(Contact *cont);
			// showContact();
			// searchContact(int index);
};

#endif
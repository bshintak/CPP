/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:57:02 by bshintak          #+#    #+#             */
/*   Updated: 2023/03/01 17:52:13 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTS_HPP
#define	CONTACTS_HPP

#include <iostream>
#include <iomanip>

# define PROMPT "\x1b[34mPlease entre your command\033[0m\n"
# define ERROR "\x1b[31mError! Command not found\033[0m\n"
# define CONT_ADD "\x1b[32mAdded to your contact list\n\033[0m\t"
# define INDEX_TO_DISPLAY "\x1b[33mPlease entre your Contact index\033[0m\n"
# define PHONEBOOK_EMPTY "\x1b[31mNo Contact was Add\033[0m\n"
# define NO_INDEX "\x1b[31mIndex not found\033[0m\n"

# define EMPTY_FIELD "\x1b[31mEmpty Field, you need to write something\033[0m\n"
# define EXIT "\x1b[31mExit\033[0m\n"

# define INDEX_TABLE "\x1b[36m  Index   |  First_name  |  Last_name  | Nickname \033[0m\n\n"
# define PIPE "\x1b[32m|\033[0m"

class	Contact {
	private:
			std::string info_saved[5];
			std::string information[5];
	public:
			Contact();
			void	new_contact(void);
			// ~contact();
};

#endif
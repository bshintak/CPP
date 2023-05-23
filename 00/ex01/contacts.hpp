/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:57:02 by bshintak          #+#    #+#             */
/*   Updated: 2023/05/23 15:18:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTS_HPP
#define	CONTACTS_HPP

#include <iostream>
#include <iomanip>

# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BOLDWHITE		"\033[1m\033[37m"
# define NONE			"\033[0m"

# define PROMPT "\x1b[34mPlease entre your command\033[0m\n"
# define ERROR "\x1b[31mError! Command not found\033[0m\n"
# define CONT_ADD "\x1b[32mAdded to your contact list\n\033[0m\t"
# define INDEX_TO_DISPLAY "\nWhich contact would you like to display ? [0 - 7]"
# define PHONEBOOK_EMPTY "\x1b[31mNo Contact was Add\033[0m\n"
# define NO_INDEX "Invalid contact index : [0 - 7], pick an other one :"

# define EMPTY_FIELD "\x1b[31mEmpty Field, you need to write something\033[0m\n"
# define EXIT "\x1b[31mExit\033[0m\n"

# define INDEX_TABLE "\x1b[36m   Index   |  FirstName  |  LastName  | Nickname \033[0m\n\n"
# define PIPE "\x1b[32m | \033[0m"

class	Contact {
	private:
			std::string info_saved[5];
			std::string information[5];
			std::string names[5];
	public:
			Contact();
			~Contact();
			void	new_contact(void);
			void	showContact(int i) const;
			std::string	getFieldInput(int i);
};

#endif

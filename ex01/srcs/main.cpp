/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 15:44:11 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 16:01:31 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main( void )
{
	char buff[10];
	Phonebook phonebook;
	Contact contact;
	
	while (std::cin >> buff)
	{
		if (buff == "ADD")
			phonebook.addContact(contact);
		if (buff == "SEARCH")
			phonebook.searchContact(contact);
		if (buff == "EXIT")
			phonebook.exit(contact);
	}
	phonebook.showContact(0);
	return (0);
}


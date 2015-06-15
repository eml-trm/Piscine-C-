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

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

void	putmenu( void )
{
	std::cout << "What can I do for you ?" << std::endl;
	std::cout << "ADD contact / SEARCH contact / EXIT ?" << std::endl;
}

int	main( void )
{
	Phonebook phonebook;
	Contact contact;
	std::string input;
	char  buff[256];

	std::cout << "Weclome in your awesome Phonebook !" << std::endl;

	while (input != "EXIT")
	{
		putmenu();
		std::cin.getline(buff, 256);
		if (std::cin.eof())
			return (0);
		input = buff;
		if (input == "ADD")
			phonebook.addContact();
		if (input == "SEARCH")
			phonebook.searchContact();
		if (input == "EXIT")
			return (1);
	}
	return (0);
}


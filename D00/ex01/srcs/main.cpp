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
	std::cout << std::endl;
	std::cout << "-ADD contact" << std::endl;
	std::cout << "-SEARCH contact " << std::endl;
	std::cout << "-EXIT " << std::endl << std::endl;
}

int	main( void )
{
	Phonebook phonebook;
	Contact contact;
	std::string input;

	std::cout << "-- Weclome in your awesome Phonebook! --" << std::endl;

	while (input != "EXIT")
	{
		putmenu();
		std::cin >> input;
		if (std::cin.eof())
			return (0);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "Good bye ! " << std::endl;
			return (1);
		}
		else
			std::cout << "Command not found." << std::endl;
	}
	return (0);
}


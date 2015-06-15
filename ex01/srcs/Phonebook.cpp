/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 15:19:39 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 15:19:41 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

int Phonebook::index = 0;

Phonebook::Phonebook( void ) { return ;}

Phonebook::~Phonebook(void) { 

	std::cout << "Contact was deleted!" << std::endl;
	return ;
}

void 	Phonebook::showContact( int i ) {

	Contact		test;
	int			y = 0;

	while (y <= 11)
	{
		std::cout << test.information[y] << ": "  << this->contactList[i].information[y] << std::endl;
		y++;
	}
}

void	Phonebook::addContact( void ) {

	Contact contact;
	int  i;

	if (index <= 7)
	{
		i = 0;
		while (i < 11)
		{
			std::cout << contact.information[i] << " : " << std::endl;
			std::cin >> contact.information[i];
			i++;
		}
		index++;
	}
	else
		std::cout << "Phonebook is full!" << std::endl;
}

char 	*size_str(char *str)
{
	char tmp[11];
	int i;

	i = 0;
	while (str[i] || i <= 10)
	{
		tmp[i] = str[i];
		i++;
	}
	if (i == 10 && str[i])
		tmp[i] = '.';
	while (i < 10 && !str[i])
	{
		tmp[i] = ' ';
		i++;
	}
	tmp[i] = '|';
	tmp[i + 1] = '\0';
	return (tmp);
}

void	Phonebook::searchContact( void )
{
	int i;
	Contact contact;
	char *tmp;

	i = 0;
	while (i < index)
	{
		std::cout << i << " | " << tmp = size_str(contact.information[0]) << " | " << contact.information[1] << " | " << contact.information[2] << std::endl;
		i++;
	}
}


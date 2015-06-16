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
#include <string>
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

	while (y < 11)
	{
		std::cout << test.information[y] << ": "  << this->contactList[i].information[y] << std::endl;
		y++;
	}
	std::cout << std::endl;
}

void	Phonebook::addContact( void ) {

	int  i;

	if (index <= 7)
	{
		i = 0;
		while (i < 11)
		{
			std::cout << this->contactList[index].information[i] << " : ";
			std::cin >> this->contactList[index].information[i];
			i++;
		}
		std::cout << std::endl << "Contact saved !" << std::endl;
		index++;
	}
	else
		std::cout << "Phonebook is full!" << std::endl;
}

void    Phonebook::printElem(void) {

	char	tmp[11];
	int		a = 0;

	int		x = 0;

	while (a < index)
	{
		int		i = 0;
	    std::cout << a + 1 << "         |";
	    while (i <= 2)
	    {
	        while (x <= 10)
	        {
	            tmp[x] = ' ';
	            x++;
	        }
	        this->contactList[a].information[i].copy(tmp, 10, 0);
	        if (this->contactList[a].information[i].size() > 10)
	            tmp[9] = '.';
	        tmp[10] = '\0';
	        std::cout << tmp;
	        if (i < 2)
	            std::cout << '|';
	        i++;
	        x = 0;
	    }
	    std::cout << std::endl;
	    a++;
	}
}

void	Phonebook::searchContact( void )
{
	int cmp;

	if (index == 0)
	{
		std::cout << "No contact !" << std::endl;
		std::cout << "ADD contatc first." << std::endl << std::endl;
		return ;
	}
	this->printElem();
	std::cout << "number of contact : " << std::endl;
	std::cin >> cmp;
	if (cmp > index)
	{
		std::cout << "This contact does not exist." << std::endl << std::endl;
		return ;
	}
	else
		this->showContact(cmp - 1);
}

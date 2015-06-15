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

void 	Phonebook::showContact( int index ) {

	std::cout << "first_name : " << this->contactList[index].first_name << std::endl;
	std::cout << "last_name : " << this->contactList[index].last_name << std::endl;
	std::cout << "nickname : " << this->contactList[index].nickname << std::endl;
	std::cout << "login : " << this->contactList[index].login << std::endl;
	std::cout << "postal_adress : " << this->contactList[index].postal_adress << std::endl;
	std::cout << "email_adress : " << this->contactList[index].email_adress << std::endl;
	std::cout << "phone_number : " << this->contactList[index].phone_number << std::endl;
	std::cout << "birthday_date : " << this->contactList[index].birthday_date << std::endl;
	std::cout << "favorite_meal : " << this->contactList[index].favorite_meal << std::endl;
	std::cout << "underwear_color : " << this->contactList[index].underwear_color << std::endl;
	std::cout << "darkest_secret : " << this->contactList[index].darkest_secret << std::endl;
}

void	Phonebook::addContact( Contact contact) {

	if (index <= 7)
	{
		this->contactList[index] = contact;
		index++;
	}
	else
		std::cout << "Phonebook is full!" << std::endl;
}



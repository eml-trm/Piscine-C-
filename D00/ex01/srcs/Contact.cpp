/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 14:23:09 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 15:01:57 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {

	this->information[0] = "first_name";
	this->information[1] = "last_name";
	this->information[2] = "nickname";
	this->information[3] = "login";
	this->information[4] = "postal_adress";
	this->information[5] = "email_adress";
	this->information[6] = "phone_number";
	this->information[7] = "birthday_date";
	this->information[8] = "favorite_meal";
	this->information[9] = "underwear_color";
	this->information[10] = "darkest_secret";
	return ;
} 

Contact::~Contact( void ) {	return ;}

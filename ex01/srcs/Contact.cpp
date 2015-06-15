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

	this->first_name = "empty";
	this->last_name = "empty";
	this->nickname = "empty";
	this->login = "empty";
	this->postal_adress = "empty";
	this->email_adress = "empty";
	this->phone_number = "empty";
	this->birthday_date = "empty";
	this->favorite_meal = "empty";
	this->underwear_color = "empty";
	this->darkest_secret = "empty";

	return ;
} 

Contact::~Contact( void ) {	return ;}

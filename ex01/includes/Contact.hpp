/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  Contact.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 14:23:25 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 15:03:54 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
	
public:

	Contact( void );
	~Contact( void );

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_adress;
	std::string		email_adress;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

};

#endif

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

	std::string		information[11];
};

#endif

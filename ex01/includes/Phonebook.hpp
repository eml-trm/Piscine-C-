/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 15:02:45 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 15:03:52 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook {

public:

	Contact contactList[7];

	Phonebook(void);
	~Phonebook(void);

	static int index;
	
	void	addContact( void);
	void	showContact( int i );
	void	searchContact( void );
};

#endif

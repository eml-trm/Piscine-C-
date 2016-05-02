/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 12:00:38 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 12:00:39 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "human.hpp"

Human::Human( void	) {

	return ;
}

Human::~Human( void ) {

	return ;
}

std::string	Human::identify( void ) {
	std::string brain;

	brain = this->_brain.identify();
	return(brain);
}

Brain&	Human::getBrain( void ) {

	return (this->_brain);
}

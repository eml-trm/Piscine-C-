/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 11:59:50 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 14:14:55 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain( void ): _size(15) {

	return ;
}

Brain::~Brain( void ) {

	return ;
}

void	Brain::brainSize( void ) {

	this->_size = 15;
	return ;
}

std::string	Brain::identify( void ) const {

	std::stringstream	str;
	std::string 	 	tmp;

	str << this;
	tmp = str.str();
	return (tmp);
}

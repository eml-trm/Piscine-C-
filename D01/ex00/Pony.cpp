/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 13:43:47 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 13:43:48 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(std::string n, std::string c, std::string sP) : _name(n), _color(c), _power(sP) {

    std::cout << "A new Pony is born!" << std::endl;
    std::cout << "I present you " << this->_name;
    std::cout << ". He is " << this->_color;
    std::cout << " and he can " << this->_power << std::endl << std::endl;
}


Pony::~Pony( void ) { 

		std::cout << this->_name << " is dead!" << std::endl;
	return ;
}

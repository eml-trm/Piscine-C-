/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:00 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:01 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n): _type(t), _name(n)
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

void	Zombie::annonce( void )
{
	std::string sentence[] = {"braiiiiins", "faiim", "rrrhrrrhh", "bonjour", "tuuueerr"};
	int i;

	i = rand() % 5;
	std::cout << "<" << this->_name << "(" << this->_type << ")" << ">";
	std::cout << sentence[i] << std::endl;
}
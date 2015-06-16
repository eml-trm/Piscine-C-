/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:23 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:24 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ): _type("cochon mort") { return ;}

ZombieEvent::~ZombieEvent( void ) { return ;}


void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(_type, name);

	return (zombie);
}

Zombie	*ZombieEvent::randomChump( void )
{
	std::string names[] = {"Eddard", "Robb", "Catherine", "Viserys", "Robert", "Oberyn"};
	int i;

	i = rand() % 6;
	Zombie  *zombie = this->newZombie(names[i]);
	zombie->annonce();
	return (zombie);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:07 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 09:45:57 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) {	
	
	int i;
	int a;
	std::string name[] = {"Eddard", "Robb", "Catherine", "John"};

		this->_HordeZombie = new Zombie[n];
	a = 0;
	while (a < n)
	{
		i = rand() % 4;
		_HordeZombie[a].zombieSetName( name[i] );
		_HordeZombie[a].annonce();
		a++;
	}
	return ;
}

ZombieHorde::~ZombieHorde( void ) {
	
	delete [] _HordeZombie;
	return ;
}

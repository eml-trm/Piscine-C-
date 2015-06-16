/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:57 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:58 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"



int main()
{
	srand(time(0));

	ZombieEvent  generator;
	Zombie *zombie = generator.randomChump();
	delete zombie;

	generator.setZombieType("Stark");
	Zombie *zombie2 = generator.randomChump();
	delete zombie2;
}

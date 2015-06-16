/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:17 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:18 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <string>
#include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent( void );
	~ZombieEvent( void );

	void setZombieType( std::string type );
	Zombie *newZombie(std::string name);
	Zombie *randomChump( void );

private:

	std::string _type;
};

#endif
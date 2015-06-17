/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:07 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:08 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{

public:

	ZombieHorde( int N );
	~ZombieHorde();

	void			announceHorde( void );

private:

	Zombie		*_HordeZombie;

};

#endif

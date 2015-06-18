/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:43:02 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/18 11:43:04 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int 	main( void )
{
	FragTrap	fight = FragTrap( "Clap" );

	fight.rangedAttack( "Dragon1" );
	fight.meleeAttack( "Dragon2" );

	fight.takeDamage( 24 );
	fight.beRepaired( 32 );

	fight.vaulthunter_dot_exe( "Dragon2" );

	fight.takeDamage( 95 );
	fight.vaulthunter_dot_exe( "Dragon1" );
	fight.beRepaired( 12 );

	fight.takeDamage(20);
	return 0;
}

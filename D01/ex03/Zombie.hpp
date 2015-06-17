/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:07 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:08 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void 	zombieSetType( std::string type );
	void 	zombieSetName( std::string name );
	void	annonce( void );

private:

	std::string _type;
	std::string _name;

};

#endif
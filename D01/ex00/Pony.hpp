/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 13:43:54 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 13:43:56 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony {

public:

	Pony(std::string name, std::string color, std::string carac);
	~Pony( void );

private:

	std::string _name;
	std::string _color;
	std::string _power; 
};

#endif

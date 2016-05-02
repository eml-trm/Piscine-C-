/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 12:00:44 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 12:00:45 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
public:
	Human( void );
	~Human( void );

	std::string	identify( void );
	Brain&		getBrain( void );

private:
	Brain _brain;	
};

#endif
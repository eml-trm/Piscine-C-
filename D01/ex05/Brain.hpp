/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 11:59:44 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 11:59:46 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain( void );
	~Brain( void );

	void brainSize( void );
	std::string identify( void ) const;

private:
	int	_size;
};

#endif

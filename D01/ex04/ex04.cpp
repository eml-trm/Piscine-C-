/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 11:10:36 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/17 11:53:45 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string sentence = "HI THIS IS BRAIN";
	std::string	*ptr_sentence = &sentence;
	std::string	&ref_sentence = sentence;

	std::cout << "string : " << sentence << " pointeur : " << *ptr_sentence << " reference: " << ref_sentence << std::endl;
	return (0);
}

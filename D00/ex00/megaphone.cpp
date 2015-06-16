/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 09:57:51 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/15 16:28:57 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char  to_upper(char c)
{
		if (c >= 'a' && c <= 'z')
			c -= 32;	
			return (std::cout << c);
		return(std::cout << c);
}

int main (int ac, char **av)
{
	int i;
	int	a;

	a = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[a])
		{
			i = 0;
			while (av[a][i])
			{
				std::cout << (to_upper(av[a][i++]));
			}
			a++;
		}
		std::cout << "\n";	
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:42:41 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/18 11:42:42 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap
{

public:

	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs );

	void	rangedAttack( std::string const & target );
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	std::string	getName( void ) const;	
	int			getHitPoints( void ) const;
	int			getMaxHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getMaxEnergyPoints( void ) const;
	int			getLevel( void ) const;
	int			getMeleeAttackDamage( void ) const;
	int			getRangedAttackDamage( void ) const;
	int			getArmorDamageReduction( void ) const;

	void 		setHitPoints( int HitPoints );
	void 		setMaxHitPoints( int MaxHitPoints );
	void 		setEnergyPoints( int EnergyPoints );
	void 		setMaxEnergyPoints( int MaxEnergyPoints );
	void 		setLevel( int Level );
	void 		setMeleeAttackDamage( int MeleeAttackDamage );
	void 		setRangedAttackDamage( int RangedAttackDamage );
	void 		setArmorDamageReduction( int ArmorDamageReduction );
	void 		setName( std::string Name );

private:

	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int 		_level;
	std::string _name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif

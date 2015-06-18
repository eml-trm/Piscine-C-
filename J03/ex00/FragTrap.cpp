/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:42:46 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/18 11:42:48 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) :
			_hitPoints(100),
			_maxHitPoints(100),
			_energyPoints(100),
			_maxEnergyPoints(100),
			_level(1),
			_name(name),
			_meleeAttackDamage(30),
			_rangedAttackDamage(20),
			_armorDamageReduction(5) {
	std::cout << "\033[1;34;40mHello! I am your new steward bot. Designation: CL4P-TP, Hyperion Robot, Class C.\033[0m" << std::endl << std::endl;

   return ;
}

FragTrap::FragTrap( FragTrap const & src) {

	*this = src;
	return ;

}

FragTrap::~FragTrap( void ) {

	std::cout << "\033[1;33mI'M DEAD I'M DEAD OHMYGOD I'M DEAD!\033[0m" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=( FragTrap const & rhs) {

	if ( this != &rhs ) 
	{
		this->_hitPoints = rhs.getHitPoints();
		this->_maxHitPoints = rhs.getMaxHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
		this->_level = rhs.getLevel();
		this->_name = rhs.getName();
		this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
		this->_rangedAttackDamage = rhs.getRangedAttackDamage();
		this->_armorDamageReduction = rhs.getArmorDamageReduction();
	}
	return *this ;
}

void	FragTrap::rangedAttack( std::string const & target) {

	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl << std::endl;
	return ;
}

void	FragTrap::meleeAttack( std::string const & target ) {

	std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	std::cout << "Take that!" << std::endl << std::endl;
	return ; 
}

void	FragTrap::takeDamage( unsigned int amount) {

	this->_hitPoints -= ( amount - _armorDamageReduction );

	if (amount > 0)
	{
		std::cout << this->_name << " was attacked and causing " << amount << " points of damage !" << " least 5 thanks to your shield" << std::endl;
		std::cout << "Your have now " << this->_hitPoints << " hit point " << std::endl << std::endl;
	}
	else
		std::cout << this->_name << " was attacked but this has no effect " << std::endl << std::endl;
	if ( this->_hitPoints > 0 )		
		std::cout << "Why do I even feel pain?! " << std::endl << std::endl;
	else
	{
		this->_hitPoints = 0;
		std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl << std::endl;
	}
	return ;
}

void	FragTrap::beRepaired( unsigned int amount ) {

	this->_hitPoints += amount;
	std::cout << "\033[1;31mHealth! Ooh, what flavor is red?\033[0m " << std::endl;
	if ( this->_hitPoints > _maxEnergyPoints)
		this->_hitPoints = _maxEnergyPoints;
	std::cout << "You now have " << this->_hitPoints << " energy points " << std::endl;
	return ;
}

void	FragTrap::vaulthunter_dot_exe( std::string const & target ) {

	srand(time(0));

	std::string attack[] = {" \033[1;35mSenseless Sacrifice\033[0m ", " \033[1;35mShhhhhhhh...trap\033[0m ", " \033[1;35mClap-in-the-Box\033[0m ", " \033[1;35mOne Shot Wonder\033[0m ", " \033[1;35mMeat Unicycle\033[0m "};
	int 		attackDamage[] = {20, 30, 42, 50, 35};

	std::cout << "Using VaultHunter costs 25 energy points " << std::endl;
	std::cout << "You have curently : " << this->_energyPoints << std::endl;
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25; 
		std::cout << this->_name << " attacks " << target << " with " << attack[rand() % 5] << " causing " << attackDamage[rand() % 5] << " points of damage !" << std::endl;
		std::cout << "You can call me Gundalf!" << std::endl << std::endl;
	}
	else
		std::cout << "You can't use VaultHunter " << std::endl; 
	return ;
} 

/*GET*/

std::string	FragTrap::getName ( void ) const { 
	return this->_name ;
}

int 		FragTrap::getHitPoints  ( void ) const { 
	return this->_hitPoints ;
}

int 		FragTrap::getMaxHitPoints ( void ) const { 
	return this->_maxHitPoints ;
}

int 		FragTrap::getEnergyPoints ( void ) const { 
	return this->_energyPoints ;
}

int 		FragTrap::getMaxEnergyPoints ( void ) const { 
	return this->_maxEnergyPoints ;
}

int 		FragTrap::getLevel ( void ) const { 
	return this->_level ;
}

int 		FragTrap::getMeleeAttackDamage ( void ) const { 
	return this->_meleeAttackDamage ;
}

int 		FragTrap::getRangedAttackDamage ( void ) const { 
	return this->_rangedAttackDamage ;
}

int 		FragTrap::getArmorDamageReduction ( void ) const { 
	return this->_armorDamageReduction ;
}

/*SET*/

void 		FragTrap::setHitPoints( int HitPoints ) {
	this->_hitPoints = HitPoints;
	return;
}

void 		FragTrap::setMaxHitPoints( int MaxHitPoints ) {
	this->_maxHitPoints = MaxHitPoints;
	return;
}

void 		FragTrap::setEnergyPoints( int EnergyPoints ) {
	this->_energyPoints = EnergyPoints;
	return;
}

void 		FragTrap::setMaxEnergyPoints( int MaxEnergyPoints ) {
	this->_maxEnergyPoints = MaxEnergyPoints;
	return;
}

void 		FragTrap::setLevel( int Level ) {
	this->_level = Level;
	return;
}

void 		FragTrap::setMeleeAttackDamage( int MeleeAttackDamage ) {
	this->_meleeAttackDamage = MeleeAttackDamage;
	return;
}

void 		FragTrap::setRangedAttackDamage( int RangedAttackDamage ) {
	this->_rangedAttackDamage = RangedAttackDamage;
	return;
}

void 		FragTrap::setArmorDamageReduction( int ArmorDamageReduction ) {
	this->_armorDamageReduction = ArmorDamageReduction;
	return;
}

void 		FragTrap::setName( std::string Name ) {
	this->_name = Name;
	return;
}

std::ostream & operator<<(std::ostream & o , FragTrap const & i) {
	std::cout << std::endl;
	std::cout << "HitPoints = " << i.getHitPoints() << std::endl;
	std::cout << "MaxHitPoints = " << i.getMaxHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << i.getEnergyPoints() << std::endl;
	std::cout << "MaxEnergyPoints = " << i.getMaxEnergyPoints() << std::endl;
	std::cout << "Level = " << i.getLevel() << std::endl;
	std::cout << "MeleeAttackDammage = " << i.getMeleeAttackDamage() << std::endl;
	std::cout << "RangedAttackDammage = " << i.getRangedAttackDamage() << std::endl;
	std::cout << "DammageReduction = " << i.getArmorDamageReduction() << std::endl;
	std::cout << "Name = " << i.getName() << std::endl;
	return o;
}

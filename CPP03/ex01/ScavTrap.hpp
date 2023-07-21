// INCLUDE 42 HEADER

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	private: 

	public: 
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &instance);
		~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &rigth_hand_side);
		std::string	getName();
		int			getDamage();
		void		attack(std::string const &target);
		void		guardGate(void);	
};

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &i);

#endif

// INCLUDE 42 HEADER
//
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <ostream>

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Defautl constructor Called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &instance) : ClapTrap(instance) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& right_hand_side)
{
	if (this != &right_hand_side)
	{
		this->name = right_hand_side.name;
		this->energy_points = right_hand_side.energy_points;
		this->hit_points = right_hand_side.hit_points;
		this->attack_damage = right_hand_side.attack_damage;
	}
	return (*this);
}

std::string ScavTrap::getName(void)
{
	return (this->name);
}

int ScavTrap::getDamage(void)
{
	return (this->attack_damage);
}

void ScavTrap::attack(std::string const &target)
{
	this->energy_points -= 1;
	std::cout << "ClapTrap " << getName() << " attacks "
		<< target << ", causing " << getDamage() << " points of damage!"
		<< std::endl;
}


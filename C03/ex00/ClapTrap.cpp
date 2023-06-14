/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:11:24 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/23 23:04:18 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS AND DESTRUCTORS
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = name;
	this->hit_points= 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

// GETTERS
std::string ClapTrap::getName(void)
{
	return (this->name);
}
int	ClapTrap::getDamage(void)
{
	return (this->attack_damage);
}

// SETTERS
void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	this->energy_points -= 1;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
		this->hit_points = hit_points - amount;
	else
		std::cout << getName() << " is dead" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& right_hand_side)
{
  if (this != &right_hand_side)
  {
    this->name = right_hand_side.name;
    this->hit_points = right_hand_side.energy_points;
    this->attack_damage = right_hand_side.attack_damage;
  }
  return (*this);
}



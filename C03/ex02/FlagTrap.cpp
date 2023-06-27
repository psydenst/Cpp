/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:01:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/06/27 18:04:12 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name)
{
        std::cout << "Default Scav constructor Called" << std::endl;
        this->hit_points = 100;
        this->energy_points = 50;
        this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
        std::cout << "Scav Destructor called" << std::endl;
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


int ScavTrap::getDamage(void)
{
        return (this->attack_damage);
}

void ScavTrap::attack(std::string const &target)
{
        this->energy_points -= 1;
        std::cout << "\033[35mScavTrap " << getName() << " attacks "
                << target << ", causing " << getDamage() << " points of damage!\033[0m"
                << std::endl;
}

void    ScavTrap::guardGate()
{
        std::cout << "Scavtrap " << getName() << " is in Gate keeper mode" << std::endl;
}

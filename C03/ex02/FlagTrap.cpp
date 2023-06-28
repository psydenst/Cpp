/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:01:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/06/28 14:32:49 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap:: FlagTrap(std::string name) : ClapTrap(name)
{
        std::cout << "Default Flag constructor Called" << std::endl;
        this->hit_points = 100;
        this->energy_points = 100;
        this->attack_damage = 30;

}

FlagTrap::~FlagTrap()
{
        std::cout << "Flag Destructor called" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const &instance) : ClapTrap(instance) 
{
        std::cout << "Copy constructor called" << std::endl;
        *this = instance;
        return ;
}

FlagTrap& FlagTrap::operator=(const FlagTrap& right_hand_side)
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

std::string FlagTrap::getName(void)
{
        return (this->name);
}

int FlagTrap::getDamage(void)
{
        return (this->attack_damage);
}


void FlagTrap::attack(std::string const &target)
{
        this->energy_points -= 1;
        std::cout << "\033[35mFlagTrap " << getName() << " attacks "
                << target << ", causing " << getDamage() << " points of damage!\033[0m"
                << std::endl;
}

void    FlagTrap::highFivesGuys()
{
        std::cout << "\033[33mFlagtrap " << getName() << " is in high Five mode :), requesting your response\033[0m" << std::endl;
}

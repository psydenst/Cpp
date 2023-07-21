/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:41:55 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/10 17:32:31 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setName(std::string name)
{
    this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

std::string HumanB::getName()
{
    return(this->_name);
}

std::string	HumanB::getWeapon()
{
    return(this->_weapon->getType());
}

void    HumanB::attack()
{
    if (this->_weapon == NULL)
        std::cout << this->getName() << " doesn't have a weapon" << std::endl;
    else
        std::cout << this->getName() << " attacks with their " << this->_weapon->getType() << std::endl; 
}

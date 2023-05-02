/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:18:21 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 20:43:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) 
{
}

HumanA::~HumanA()
{
    return ;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

std::string HumanA::getName()
{
	return (this->_name);

}
void	HumanA::setName(std::string name)
{
	this->_name = name;

}

void HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << this->_weapon.getType() << std::endl; 
}

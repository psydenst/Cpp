/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:50:37 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 19:26:46 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
    this->setType(weaponType);
}

Weapon::~Weapon()
{
    
}

std::string const &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string name)
{
    this->_type = name;
}

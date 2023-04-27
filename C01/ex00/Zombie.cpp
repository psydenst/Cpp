/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:33:51 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 15:39:57 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setname(std::string name)
{
    this->name = name;
}

std::string Zombie::get_name(void)
{
    return(this->name);
}

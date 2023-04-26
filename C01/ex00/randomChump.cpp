/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:53:42 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/26 20:51:03 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie;
    zombie.setname(name);
    zombie.announce();
}

Zombie*     newZombie(std::string name)
{
    Zombie zombie;
    zombie.setname(name);
    Zombie *ret = &zombie;
    return(ret);
}
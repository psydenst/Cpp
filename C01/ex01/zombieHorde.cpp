/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:32:05 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 17:34:57 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int n, std::string name)
{
    Zombie *ret;
    while (n--)
    {
        ret = new Zombie();
        ret->setname(name);
        ret->announce();
    }
    return (ret);
}
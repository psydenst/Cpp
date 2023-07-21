/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:32:05 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:58 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int n, std::string name)
{
    if (n < 0)
        return (0);
    Zombie *ret;
    int i = 0;
    ret = new Zombie[n];
    while (n--)
    {
        ret[i].setname(name);
        ret[i].announce();
        i++;
    }
    return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:34:17 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 18:16:38 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    return;
}

int main()
{
    Zombie* zombie = zombieHorde(2, "Hello");
    delete zombie;
}
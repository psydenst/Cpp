/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 22:32:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/26 20:51:24 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie One;
    Zombie Two;
    Zombie Three;
    
    randomChump("Paul");
    Two = *newZombie("John");
    Two.announce();
    // One.announce();
}
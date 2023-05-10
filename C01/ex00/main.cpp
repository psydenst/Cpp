/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 22:32:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/10 17:06:54 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *One;
    Zombie *Two;
    
    randomChump("Paul");
    Two = newZombie("John");
    Two->announce();
    randomChump("Ringo");
    One = newZombie("George");
    One->announce();
    delete One;
    delete Two;
}
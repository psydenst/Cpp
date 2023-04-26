/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:18:15 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/25 22:20:32 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    public:
        void announce(void);
        Zombie* newZombie(std::string name);
        void randomChump( std::string name);
        std::string get_name(void);
    private:
        std::string name;
};

#endif
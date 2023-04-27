/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:18:15 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 16:06:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        void        announce(void);

    // Setters
        void        setname(std::string name);

    // Getters
        std::string get_name(void);

    private:
        std::string name;
};
    Zombie*     newZombie(std::string name);
    void        randomChump( std::string name);

#endif
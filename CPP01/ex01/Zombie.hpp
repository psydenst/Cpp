/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:04:43 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 17:52:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        void        announce(void);
        Zombie();
        ~Zombie();

    // Setters
        void        setname(std::string name);

    // Getters
        std::string get_name(void);

    private:
        std::string name;
};
    Zombie      *zombieHorde (int n, std::string name);
    void        randomChump( std::string name);

#endif
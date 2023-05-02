/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:42:21 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 20:34:41 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
    Weapon(std::string weaponType);
    ~Weapon();

    // Getters
    std::string const &getType();
    // Setters
    void setType(std::string name);

    private:
        std::string _type;
};

#endif

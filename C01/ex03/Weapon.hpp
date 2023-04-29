/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:42:21 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/28 20:14:16 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
    Weapon();
    ~Weapon();

    // Getters
    std::string getType();
    // Setters
    void setType(std::string name);

    private:
        std::string type;
};

#endif
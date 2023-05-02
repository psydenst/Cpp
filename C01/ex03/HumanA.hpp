/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:18:34 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 20:37:50 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
    HumanA(std::string name, Weapon &weapon);  
    ~HumanA();
// SETTER
	void	setWeapon(Weapon &weapon);
	void    setName(std::string name);
// GETTERS
	std::string getName();
	std::string getWeapon(Weapon &weapon);
// OTHERS
	void    attack();

    private:    
	std::string	_name;
    Weapon		_weapon;

};

#endif

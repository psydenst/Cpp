/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:46:08 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 20:07:58 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
    HumanB(std::string name);  
    ~HumanB();
// SETTERS
	void	setName(std::string name);
	void	setWeapon(Weapon &weapon);
// GETTERS
	std::string	getName();
	std::string	getWeapon();
// OTHERS
	void    attack();

	private:
    Weapon *_weapon;
    std::string _name;
};

#endif

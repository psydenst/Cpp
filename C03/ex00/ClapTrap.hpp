/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:42:31 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/23 23:06:39 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int	energy_points;
		int	attack_damage; // initialize them in hpp
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &instance);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &right_hand_side);

		// SETTERS
		void	setName(std::string name);
		// GETTERS
		int			getDamage(void);
		std::string	getName(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif

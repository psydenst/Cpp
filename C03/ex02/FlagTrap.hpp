/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:50:35 by psydenst          #+#    #+#             */
/*   Updated: 2023/06/28 14:27:40 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	private: 

        public:
                FlagTrap(void);
                FlagTrap(std::string name);
                FlagTrap(FlagTrap const &instance);
                ~FlagTrap(void);
                FlagTrap        &operator=(FlagTrap const &rigth_hand_side);
                std::string		getName();
                int                     getDamage();
                void            attack(std::string const &target);
                void            highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &i);

#endif

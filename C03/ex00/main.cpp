/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:02:48 by psydenst          #+#    #+#             */
/*   Updated: 2023/06/28 17:02:57 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap one("Fred");
	ClapTrap two("GabiGol");

	one.attack("GabiGol");
	one.beRepaired(1);

}

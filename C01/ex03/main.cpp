/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:06:56 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/02 20:36:34 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return(0) ;
}



// int main()
// {

// 	HumanA A("bob", "club");
//  //   HumanB B;
// 	std::cout << A.getname() << std::endl;
// //	std::cout << A.getWeapon() << std::endl;
// 	A.attack();

// 	HumanB B("Bernard");
// 	B.setWeapon("lolo do pai");
// 	B.attack();
// }

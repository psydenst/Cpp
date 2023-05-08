/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:36:21 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/08 19:47:15 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "\033[36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do! \033[0m" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\033[35mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m"  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\033[31m I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[37m I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\033[0m" << std::endl;

}

void	Harl::complain(std::string level)
{
	void (Harl::*functionPointer[4])(void) = 
	{
		&Harl::warning, 
		&Harl::error, 
		&Harl::info, 
		&Harl::debug
	};

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	i = -1;
	while(levels[++i] != level)
		continue ;
	(this->*functionPointer[i])();
}



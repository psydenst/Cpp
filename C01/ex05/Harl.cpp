/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:36:21 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/05 20:07:37 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Karl::Karl()
{
	return ;
}

Karl::~Karl()
{
	return ;
}

void	Karl::debug(void)
{
	std::cout << "\033[35mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do! \033[0m" << std::endl;
}

void	Karl::info(void)
{
	std::cout << "\033[35mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m"  << std::endl;
}

void	Karl::warning(void)
{
	std::cout << "\033[35mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m" << std::endl;
}

void	Karl::error(void)
{
	std::cout << "\033[35m\ think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\033[0m" 

}



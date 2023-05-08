/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:47:01 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/08 19:47:49 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	tic_tac(void)
{
	int i = 0;
	while (i < 4)
	{
		std::cout << "." << std::endl;
		i++;
		usleep(500000);
	}	
}

int main()
{
	Harl Harl;
	int i = 0;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		tic_tac();
		Harl.complain(levels[i]);
		i++;
	}
	
}
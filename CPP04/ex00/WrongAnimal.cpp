/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:39:25 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:43:06 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(std::string name)
{
	this->type = name;
	std::cout << "WrongAnimal " << this->type << " has been created" << std::endl; 

}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{
	*this = instance;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(LOUD AND UNBEREABLE WRONGANIMAL SOUND)" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &right_hand_side)
{
	this->type = right_hand_side.getType();
	return *this;
}

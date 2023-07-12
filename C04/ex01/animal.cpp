/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:39:18 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 22:36:17 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(std::string name)
{
	this->type = name;
	std::cout << "Animal " << this->type << " has been created" << std::endl; 

}

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(Animal const &instance)
{
	*this = instance;
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

void	Animal::makeSound() const
{
	std::cout << "(LOUD AND UNBEREABLE ANIMAL SOUND)" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal &Animal::operator=(Animal const &right_hand_side)
{
	this->type = right_hand_side.getType();
	return *this;
}

void	Animal::printIdea()
{
	return ;
}

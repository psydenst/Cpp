/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:26:01 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 23:00:28 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "brain.hpp"

Cat::Cat(std::string name)
{
	this->type = name;
	std::cout << "Cat " << this->type << " has been created" << std::endl; 

}

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brainPtr = new Brain();
}

Cat::~Cat()
{
	this->printIdea();
	std::cout << "Cat default destructor called" << std::endl;
	delete(this->brainPtr);
}

Cat::Cat(Cat const &instance)
{
	*this = instance;
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miouw" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

Cat &Cat::operator=(Cat const &right_hand_side)
{
	this->brainPtr = new Brain(*right_hand_side.brainPtr);
	this->type = right_hand_side.getType();
	return *this;
}

void Cat::printIdea()
{
        std::cout << "\033[31m "<< this->brainPtr->ideas[10] << "\033[0m" << std::endl;
}


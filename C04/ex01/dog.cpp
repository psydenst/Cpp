/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:31:37 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 23:01:53 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "brain.hpp"

Dog::Dog(std::string name)
{
	this->type = name;
	std::cout << "Dog " << this->type << " has been created" << std::endl; 

}

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brainPtr = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete(this->brainPtr);
}

Dog::Dog(Dog const &instance)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = instance;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

Dog &Dog::operator=(Dog const &right_hand_side)
{
	this->brainPtr = new Brain;
	this->brainPtr = right_hand_side.brainPtr;
	this->type = right_hand_side.getType();
	return *this;
}

void Dog::printIdea()
{
	std::cout << "\033[31m" << this->brainPtr->ideas[10] << "\033[0m" << std::endl;
}


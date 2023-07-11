/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:31:37 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:33:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(std::string name)
{
	this->type = name;
	std::cout << "Dog " << this->type << " has been created" << std::endl; 

}

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(Dog const &instance)
{
	*this = instance;
	std::cout << "Dog copy constructor called" << std::endl;
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
	this->type = right_hand_side.getType();
	return *this;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:26:01 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:28:47 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(std::string name)
{
	this->type = name;
	std::cout << "Cat " << this->type << " has been created" << std::endl; 

}

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
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
	this->type = right_hand_side.getType();
	return *this;
}

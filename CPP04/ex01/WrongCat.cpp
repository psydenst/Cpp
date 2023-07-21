/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:46:52 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:48:35 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string name)
{
	this->type = name;
	std::cout << "WrongCat " << this->type << " has been created" << std::endl; 

}

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &instance)
{
	*this = instance;
	std::cout << "WrongCat copy constructor called" << std::endl;
	return ;
}

std::string WrongCat::getType() const
{
	return (this->type);
}

WrongCat &WrongCat::operator=(WrongCat const &right_hand_side)
{
	this->type = right_hand_side.getType();
	return *this;
}


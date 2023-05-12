/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:37 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/12 20:38:03 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
    this->type = '\0';
}

Fixed::Fixed(Fixed const &instance)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = instance;
    return ;    
}

Fixed::Fixed(float const value)
{
    this->_rawBits = (int) roundf(value * (1 << this->_fraction_bits));
    std::cout << "Float constructor called" << std::endl;
    this->type = 'f';
    return ;
}

Fixed::Fixed(int const value)
{
    this->_rawBits = (value * (1 << this->_fraction_bits));
    std::cout << "Int constructor called" << std::endl;
    this->type = 'i';
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &right_hand_side)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_rawBits = right_hand_side.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &outputFile, Fixed const &i)
{
    if (i.type == 'i')
        outputFile << i.toInt();
    else
        outputFile << i.toFloat();
    return outputFile;
}

int Fixed::toInt(void) const
{
    return (this->_rawBits / 256);
}

float Fixed::toFloat(void) const
{
      return ((float)this->_rawBits / 256);
}

int Fixed::getRawBits(void) const
{
    return (this->_rawBits);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:37 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/11 21:56:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &instance)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = instance;
    return ;    
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    
}
float Fixed::toFloat(void) const


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_rawBits);
}

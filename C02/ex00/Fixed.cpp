/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:15:45 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/11 17:15:54 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
   // this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &instance)
{
    // this->_fraction_bits = 0;
    std::cout << "Copy constructor called" << std::endl;
    *this = instance; // would this->*instance work?
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_rawBits);
}

void    Fixed::setRawBits(int _rawBits)
{
    this->_rawBits = _rawBits / _fraction_bits;
}

Fixed &Fixed::operator =(Fixed const &rigth_hand_side)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_rawBits = rigth_hand_side.getRawBits();
    return (*this);
}

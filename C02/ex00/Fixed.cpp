/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:15:45 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/09 22:50:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static int const Fixed::_fraction_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &instance)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = instance; // would this->*instance work?
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
}

void    Fixed::setRawBits(int _rawBits)
{
    this->_rawBits = _rawBits;
}

Fixed &Fixed::operator =(Fixed &const rigth_hand_side)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_rawBits = rigth_hand_side.getRawBits();
}

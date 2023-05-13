/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:53:04 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/12 22:23:02 by psydenst         ###   ########.fr       */
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

bool	Fixed::operator==(Fixed const &right_hand_side) const
{
    return (this->_rawBits == right_hand_side.getRawBits());
}

bool	Fixed::operator > (Fixed const &right_hand_side) const
{
    return (this->_rawBits > right_hand_side.getRawBits());
}

bool	Fixed::operator < (Fixed const &right_hand_side) const
{
    return (this->_rawBits < right_hand_side.getRawBits());
}

bool	Fixed::operator <= (Fixed const &right_hand_side) const
{
    return (this->_rawBits <= right_hand_side.getRawBits());
}

bool	Fixed::operator >= (Fixed const &right_hand_side) const
{
    return (this->_rawBits >= right_hand_side.getRawBits());
}


bool	Fixed::operator != (Fixed const &right_hand_side) const
{
    return (this->_rawBits != right_hand_side.getRawBits());
}

Fixed   &Fixed::operator=(Fixed const &rigth_hand_side)
{
    this->_rawBits = rigth_hand_side._rawBits;
    return (*this);
}



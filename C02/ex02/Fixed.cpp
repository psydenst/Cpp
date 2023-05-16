/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:53:04 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/15 22:20:57 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS AND DESTRUCTOR
Fixed::Fixed() : _rawBits(0)
{
 //   std::cout << "Default constructor called" << std::endl;
	this->type = '\0';
}

Fixed::Fixed(Fixed const &instance)
{
 //   std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;    
}

Fixed::Fixed(float const value)
{
	this->_rawBits = (int) roundf(value * (1 << this->_fraction_bits));
 //   std::cout << "Float constructor called" << std::endl;
	this->type = 'f';
	return ;
}

Fixed::Fixed(int const value)
{
	this->_rawBits = (value * (1 << this->_fraction_bits));
  //  std::cout << "Int constructor called" << std::endl;
	this->type = 'i';
	return ;
}

Fixed::~Fixed()
{
  //  std::cout << "Destructor called" << std::endl;
}

// SETTERS AND GETTERS

void	Fixed::setRawBits(int _rawBits)
{
	this->_rawBits = _rawBits;
}

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

int Fixed::toInt(void) const
{
	return (this->_rawBits / 256);
}

float Fixed::toFloat(void) const
{
	  return ((float)this->_rawBits / 256);
}

// ENHERITED FROM EX01

std::ostream &operator<<(std::ostream &outputFile, Fixed const &i)
{
	if (i.type == 'i')
		outputFile << i.toInt();
	else
		outputFile << i.toFloat();
	return outputFile;
}

// COMPARISON FUNCTIONS

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

// ARITHMETIC FUNCTIONS

Fixed Fixed::operator*(Fixed const &rigth_hand_side)
{
	return (this->toFloat() * rigth_hand_side.toFloat());
}

Fixed Fixed::operator/(Fixed const &rigth_hand_side)
{
	return (this->toFloat() / rigth_hand_side.toFloat());
}

Fixed Fixed::operator-(Fixed const &rigth_hand_side)
{
	return (this->toFloat() - rigth_hand_side.toFloat());
}

Fixed Fixed::operator+(Fixed const &rigth_hand_side)
{
	return (this->toFloat() + rigth_hand_side.toFloat());
}

Fixed   &Fixed::operator=(Fixed const &rigth_hand_side)
{
	this->_rawBits = rigth_hand_side._rawBits;
	return (*this);
}

// INCREMENT AND DECREMENT FUNCTIONS

//pre-incrementation
Fixed   &Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed   &Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

// post-incrementation
Fixed   Fixed::operator++(int)
{
	Fixed ret(*this);
	ret._rawBits++;
	return (ret);
}

Fixed   Fixed::operator--(int)
{
	Fixed ret(*this);
	ret._rawBits--;
	return (ret);
}

int const	Fixed::_fraction_bits = 8;
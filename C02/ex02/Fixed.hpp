/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:02:52 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/16 15:06:07 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
	int					_rawBits;
	static int const	_fraction_bits;

	public:
	Fixed(void);
	Fixed(Fixed const &instance); // cpy constructor
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();
	char type;

	// COMPARISON OPERATIONS 
	bool	operator==(Fixed const &right_hand_side) const;
	bool	operator>(Fixed const &right_hand_side) const;
	bool	operator<(Fixed const &right_hand_side) const;
	bool	operator<=(Fixed const &right_hand_side) const;
	bool	operator>=(Fixed const &right_hand_side) const;
	bool	operator!=(Fixed const &right_hand_side) const;

	// ARITMETHIC OPERATIONS
	Fixed   &operator=(Fixed const &right_hand_side);
	Fixed   operator+(Fixed const &rigth_hand_side);
	Fixed   operator-(Fixed const &rigth_hand_side);    
	Fixed   operator*(Fixed const &rigth_hand_side);
	Fixed   operator/(Fixed const &rigth_hand_side);

	// INCREMENT AND DECREMENT
	// pre-increment/decrement
	Fixed   &operator++(void);
	Fixed	&operator--(void);
	// post-increment/decrement
	Fixed	operator++(int);
	Fixed	operator--(int);


	//MIN AND MAX
	static	Fixed const &min(Fixed const &value1, Fixed const &value2);
	static	Fixed const &max(Fixed const &value1, Fixed const &value2);


	// SETTERS
	void    setInt(int const value);
	void    setFloat(float const value);

	// GETTERS
	int     getRawBits(void) const;
	void    setRawBits(int _rawBits);

	// OTHERS
	int     toInt() const;
	float   toFloat() const;

};

std::ostream &operator<<(std::ostream &outputFile, Fixed const &i);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:34 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/12 20:42:03 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private:
    int     _rawBits;
    static int const _fraction_bits = 8;

    public:
    Fixed(void);
    Fixed(Fixed const &instance); // cpy constructor
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();
    char type;
	Fixed	&operator=(Fixed const &right_hand_side);

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
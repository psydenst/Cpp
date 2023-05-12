/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:34 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/11 21:52:58 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
    int     _rawBits;
    
    static int const _fraction_bits = 8;

    public:
    Fixed(void);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();

    // SETTERS
    void    setInt(int const value);
    void    setFloat(float const value);

    // GETTERS
    int     getInt(void);
    float   getFloat(void);
    int getRawBits(void) const;
    void setRawBits(int _rawBits);

    // OTHERS
    int toInt(void) const;
    float toFloat(void) const;

    Fixed &operator=(Fixed const &rigth_hand_side);
};
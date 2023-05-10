/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:14 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/09 22:50:04 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int     _rawBits;
    static int const _fraction_bits;

    public:
    Fixed(void);
    Fixed(Fixed const &instance);
    ~Fixed();
    int getRawBits(void);
    void setRawBits(int _rawBits);    

    Fixed &operator=(Fixed &const rigth_hand_side);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:14 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/11 17:32:28 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int     _rawBits;
    static int const _fraction_bits = 8;
    
    public:
    Fixed(void);
    Fixed(Fixed const &instance);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int _rawBits);

    Fixed &operator=(Fixed const &rigth_hand_side);
};

#endif
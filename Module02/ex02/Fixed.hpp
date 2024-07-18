/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:02:57 by pamone            #+#    #+#             */
/*   Updated: 2024/07/16 11:05:20 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _fixed_point;
        static int const    _n_fractional_bits;
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        Fixed &operator=(Fixed const &Fixed);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed(const int value);
        Fixed(const float value);
        float   toFloat(void) const;
        int     toInt(void) const;
//===========================================================================================================//
        Fixed operator+(Fixed const &Fixed);
        Fixed operator-(Fixed const &Fixed);
        Fixed operator/(Fixed const &Fixed);
        Fixed operator*(Fixed const &Fixed);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        bool operator<(Fixed const &fixed) const;
        bool operator>(Fixed const &fixed) const;
        bool operator<=(Fixed const &fixed) const;
        bool operator>=(Fixed const &fixed) const;
        bool operator!=(Fixed const &fixed) const;
        bool operator==(Fixed const &fixed) const;
        static Fixed &min(Fixed &fixed1, Fixed &fixed2);
        static Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed &max(Fixed &fixed1, Fixed &fixed2);
        static Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
        
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif
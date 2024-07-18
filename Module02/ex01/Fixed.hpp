/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:21:38 by pamone            #+#    #+#             */
/*   Updated: 2024/07/16 10:26:33 by pamone           ###   ########.fr       */
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
        int getRawBits(void) const;
        void setRawBits(int const raw);
// ============================= Newly Added =================================//
        Fixed(const int value);
        Fixed(const float value);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif
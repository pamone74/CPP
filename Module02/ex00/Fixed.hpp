/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 07:42:14 by pamone            #+#    #+#             */
/*   Updated: 2024/07/16 09:01:28 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP 
#define FIXED_HPP 

#include <iostream> 

// Fixed class
class Fixed
{
    private:
        int _fixed_point; // Private member variable to store the fixed-point number value
        static int const _n_fractional_bits; // Static constant to store the number of fractional bits, shared among all instances of the class

    public:
        // Default constructor: initializes a new instance of the Fixed class
        Fixed();
        
        // Copy constructor: initializes a new instance of the Fixed class by copying another instance
        Fixed(Fixed const &fixed);
        
        // Copy assignment operator: assigns the value of one Fixed instance to another
        Fixed &operator= (Fixed const &fixed);
        
        // Destructor:
        ~Fixed();
        
        // Getter and Getter
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif 

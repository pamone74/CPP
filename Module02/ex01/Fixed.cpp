/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:21:17 by pamone            #+#    #+#             */
/*   Updated: 2024/07/16 10:26:05 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int const       Fixed::_n_fractional_bits = 8;

Fixed::Fixed(): _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point = raw;
    return;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed._fixed_point);
    return(*this);
}

// ================================================================ New part =============================================================//

Fixed::Fixed(const float value)
{
    float           fixed_float;

    std::cout << "Float constructor called" << std::endl;
    fixed_float = value * (1 << Fixed::_n_fractional_bits);
    this->_fixed_point = roundf(fixed_float);
}

Fixed::Fixed(const int value)
{
    int           fixed_int;

    std::cout << "int constructor called" << std::endl;
    fixed_int = value * (1 << Fixed::_n_fractional_bits);
    this->setRawBits(fixed_int);
}


float   Fixed::toFloat(void) const
{
    float   fl;

    fl = (float)this->_fixed_point / (1 << Fixed::_n_fractional_bits);
    return (fl);
}

int   Fixed::toInt(void) const
{
    return (this->_fixed_point >> Fixed::_n_fractional_bits);
}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return (new_out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 09:46:05 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 11:37:26 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <exception>
#include <iostream>
#include <limits.h>
#include <float.h>
# include <sstream>

enum e_data_type{
    CHAR = 0 ,
    INT = 1,
    FLOAT = 2,
    DOUBLE = 3,
    UNKNOWN = 4    
};
class ScalarConverter
{
    private:
    // constructors
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &Scalar_Converter);
        ScalarConverter &operator=(const ScalarConverter &Scalar_Converter);
        ~ScalarConverter(void);
        
        // Addon Functions.
        static e_data_type _getType(std::string &literal);


        // types
        static bool _isInt(std::string & literal);
        static bool _isNan(std::string & literal);
        static bool _isDouble(std::string & literal);
        static bool _isFloat(std::string & literal);
        static bool _isChar(std::string & literal);


        // Convert
        static double _toDouble(std::string & literal);
        static float _toFloat(std::string & literal);
        static char _toChar(std::string & literal);
        static int _toInt(std::string & literal);

        // print

        static void _printInt(std::string &literal);
        static void _printDouble(std::string &literal);
        static void _printFloat(std::string &literal);
        static void _printChar(std::string &literal);

        static std::string	_stringFromEnum(e_data_type type);

    public:
        
        static void convert(std::string &literal);

    class UnknownException: public std::exception
    {
        public:
            virtual const char * what() const throw();
        
    };
    
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 09:59:32 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 13:09:57 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <cctype>
#include <climits>
#include <limits>
#include <sys/types.h>

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter( const ScalarConverter &scalar)
{
    (void)scalar;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarconverter)
{
    (void) scalarconverter;
    return *this;
}

ScalarConverter::~ScalarConverter(void) {}


// Types

bool ScalarConverter::_isInt(std::string &literal)
{
   for(size_t i = (literal.at(0) == '-' ? 1 : 0); i < literal.length(); i++)
   {
        if(!std::isdigit(literal.at(i)))
            return false;
   }
   return true;
    
}

bool ScalarConverter::_isNan(std::string & literal)
{
    return (!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("nanf") \
            || !literal.compare("-inf") || !literal.compare("+inf")|| !literal.compare("nan") ) ;
}


bool ScalarConverter::_isDouble(std::string &literal)
{
    bool Dot = false;
    
    if(!literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("nan"))
        return (true); /// needs to modify
    for(size_t i = (literal.at(0) == '-' ? 1:0); i < literal.length(); i++)
    {
        if(literal.at(i) == '.')
        {
            if(Dot)
                return (false);
        Dot = true;
        }
        else if(!std::isdigit(literal.at(i)))
            return (false);
    }
    return (true);
}
int count_f(std::string &literal)
{
    int total = 0;
    for(size_t i = 0; i < literal.length(); i++)
    {
        if(literal.at(i) == 'f')
            total++;
    }
    return total;
    
}
bool ScalarConverter::_isFloat(std::string &literal)
{
   
    bool Dot = false;
    
    if(!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("nanf"))
        return (true); /// needs to modify

    if(literal.at(literal.length() - 1) != 'f' || count_f(literal) > 1)
        return (false);
 
    for(size_t i = (literal.at(0) == '-' ? 1:0); i < literal.length(); i++)
    {
        if(literal.at(i) == '.')
        {
            if(Dot)
                return (false);
        Dot = true; 
        }
        else if(literal.at(i) == 'f' && literal.length())
            return (true);
        else if(!std::isdigit(literal.at(i)))
          return (false);
            
    }
  
    return (true);
}

bool ScalarConverter::_isChar(std::string &literal)
{
    if(literal.length() != 1)
        return (false);
    
    if(literal.at(0) > std::numeric_limits<char>::max() || literal.at(0) < std::numeric_limits<char>::min())
        return (false);
    
    if(std::isdigit(literal.at(0)))
        return false;

    return true;
    
}
// converter
int ScalarConverter::_toInt(std::string &literal)
{
    int i;
    std::istringstream(literal) >> i;
    return (static_cast<int>(i));
}

char ScalarConverter::_toChar(std::string &literal)
{
    int i;
    std::istringstream(literal) >> i;
    return (static_cast<char>(i));
}

double ScalarConverter::_toDouble(std::string &literal)
{
    double i;
    std::istringstream(literal) >> i;
    return (static_cast<double>(i));
}

float ScalarConverter::_toFloat(std::string &literal)
{
    float i;
    std::istringstream(literal) >> i;
    return (static_cast<float>(i));
}
// Addson Functions
e_data_type ScalarConverter::_getType(std::string & literal)
{
   
    if(_isInt(literal))
    {
        
        return INT;
    }
      
    if(_isChar(literal))
    {
        
        return CHAR;
    }
        
    if(_isFloat(literal))
    {
        return FLOAT;
    }
        
    if(_isDouble(literal))
    {
        return DOUBLE;
    }
     
        
    return UNKNOWN;
    
}


// exception

const char *ScalarConverter::UnknownException::what() const throw()
{
    return ("Unknown data type");
}


// print

void ScalarConverter::_printInt(std::string &literal)
{
    int i = _toInt(literal);
    double d = _toDouble(literal);

    if(d > INT_MAX || d < INT_MIN || d < -INT_MAX || _isNan(literal) )
        std::cout << "Int: Imposible" << std::endl;
    else
     std::cout << "int: " << i << std::endl;
}

void ScalarConverter::_printChar(std::string &literal)
{
    char c = _toChar(literal);
    double d = _toDouble(literal);

    if(d > CHAR_MAX || d < CHAR_MIN || d < -CHAR_MAX ||  _isNan(literal) )
        std::cout << "char: Imposible" << std::endl;
    else if(!std::isprint(static_cast<unsigned char>(d)))
        std::cout << "char: Not displayable" << std::endl;
    else
     std::cout << "char: '" << c << "'"<< std::endl;
}

void	ScalarConverter::_printFloat(std::string &literal) {
	float	f = _toFloat(literal);

	if (!_isNan(literal)) {
		if (f > FLT_MAX || f < -FLT_MAX) {
			std::cout << "float: impossible" << std::endl;
		} else {
			if (f == (int)f)
				std::cout << "float: " << f << ".0f" << std::endl;
			else
				std::cout << "float: " << f << "f" << std::endl;
		}
		return ;
	}
	/* Pseudo literal */
	if (!literal.substr(literal.size() - 2).compare("ff"))
		std::cout << "float: " << literal << std::endl;
	else
		std::cout << "float: " << literal << "f" << std::endl;
}

void	ScalarConverter::_printDouble(std::string &literal) {
	float	f = _toFloat(literal);
	double	d = _toDouble(literal);

	if (!_isNan(literal)) {
		if (d >= DBL_MAX || d <= -DBL_MAX) {
			std::cout << "double: impossible" << std::endl;
		} else {
			if (f == (int)f)
				std::cout << "double: " << d << ".0" << std::endl;
			else
				std::cout << "double: " << d << std::endl;
		}
		return ;
	}
	/* Pseudo literal */
	if (!literal.substr(literal.size() - 2).compare("ff"))
		std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
	else
		std::cout << "double: " << literal << std::endl;
}


void	ScalarConverter::convert(std::string &literal) {
     
	if (literal.size() == 0)
		throw ScalarConverter::UnknownException();
	e_data_type	type = _getType(literal);
	if (type == UNKNOWN)
		throw ScalarConverter::UnknownException();
	std::cout << "[ScalarConverter] " << "Type detected: "<<  _stringFromEnum(type) << std::endl;
	if (literal.size() == 1 && !std::isdigit(literal.at(0)) && std::isprint(literal.at(0))) {
		std::cout << "char: '" << literal.at(0) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(literal.at(0)) << std::endl;
		std::cout << "float: " << static_cast<float>(literal.at(0)) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(literal.at(0)) << ".0" << std::endl;
		return;
	}
	_printChar(literal);
	_printInt(literal);
	_printFloat(literal);
	_printDouble(literal);
}

std::string	ScalarConverter::_stringFromEnum(e_data_type type) {
	if (type == CHAR)
		return ("CHAR");
	if (type == INT)
		return ("INT");
	if (type == FLOAT)
		return ("FLOAT");
	if (type == DOUBLE)
		return ("DOUBLE");
	return ("UNKNOWN");
}
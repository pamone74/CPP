/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:38:45 by pamone            #+#    #+#             */
/*   Updated: 2024/10/22 10:57:05 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>



typedef std::string string;

class BitcoinExchange
{
private:
// Map is a key value paired container that allows unique keys to be stored sorted order & the time complexity is (0(logn))
    std::map<string, string>    _data;

    string  previousDate(const string& date);
    string  nextDate(const string& date);
    string  trim(const string& str);

    void    validateNumber(const string &str);
    bool    fileExists(const string &filename);
    bool    fileIsEmpty(const string &filename);
    bool    validDate(const string &date);
    bool    isLeapYear(int year);
    bool    ft_all_of(const string &str, int (*isDigit)(int));

    int     ft_stoi(const string &str);
    double  ft_stod(const string &str);
    string  ft_to_string(int value);

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void run(const string &filename);
};

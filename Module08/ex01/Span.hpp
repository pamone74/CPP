/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:14:48 by pamone            #+#    #+#             */
/*   Updated: 2024/09/15 07:27:09 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
    private:
        unsigned int _maxSize;
        unsigned int _currentSize;
        std::vector<int> _numbers;
   public:
        Span(unsigned int N);
        Span(void);
        Span(const Span & span);
        Span &operator=(const Span & span);
        ~Span(void);

        // functions:
        void addNumber(unsigned int number);
        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;

        template <typename iterator> void addNumberRange(iterator begin, iterator end)
        {
            if(static_cast<unsigned long>(std::distance(begin, end)) >_maxSize -_numbers.size())
                 throw std::out_of_range("Not enough space to add all numbers!");
            _numbers.insert(_numbers.end(), begin, end);
        }
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 05:23:31 by pamone            #+#    #+#             */
/*   Updated: 2024/09/15 07:18:15 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(void) : _maxSize(0) {}

Span::Span(const Span &span) : _maxSize(span._maxSize), _numbers(span._numbers) {}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
    {
        _maxSize = span._maxSize;
        _numbers = span._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int number)
{
    if (_numbers.size() >= _maxSize)
        throw std::out_of_range("Span is already full.");
    _numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough elements to find a span.");

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i)
    {
        unsigned int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }

    return minSpan;
}

unsigned int Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough elements to find a span.");

    int minIt = *std::min_element(_numbers.begin(), _numbers.end());
    int  maxIt = *std::max_element(_numbers.begin(), _numbers.end());

    return maxIt - minIt;
}

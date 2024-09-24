/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 06:54:06 by pamone            #+#    #+#             */
/*   Updated: 2024/09/15 07:30:58 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <exception>

int main()
{
    try
    {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;



    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test with more than 10,000 numbers
    try
    {
        Span spLarge(10000);
        for (unsigned int i = 0; i < 10000; ++i)
            spLarge.addNumber(i);

        std::cout << "Shortest span (large): " << spLarge.shortestSpan() << std::endl;
        std::cout << "Longest span (large): " << spLarge.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // testing mofified addNumber

    Span sp1(5);

    std::vector<int> numbers;
    numbers.push_back(6);
    numbers.push_back(3);
    numbers.push_back(17);
    numbers.push_back(9);
    numbers.push_back(11);

   
    // Add numbers using a range of iterators
    sp1.addNumberRange(numbers.begin(), numbers.end());
    
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:34 by pamone            #+#    #+#             */
/*   Updated: 2024/10/23 10:02:35 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
}

PmergeMe::PmergeMe(const PmergeMe &rhs)
{
        
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if(&rhs != this)
    {
        *this = rhs;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
    
}
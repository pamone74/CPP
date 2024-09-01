/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:21:43 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 16:45:46 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T> void swap(T &a, T &b)
{
    T temp = a;
    
    a = b;
    b = temp;
}

template <typename T > const T min(T const &first, T const &second)
{
    if(first == second)
        return second;
    else if(first < second)
        return first;
    else 
        return second;

}

template <typename T >const T max(T const &first, T const &second)
{
    if(first == second)
        return second;
    else if(first > second)
        return first;
    else 
        return second;
    
}


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 06:55:20 by pamone            #+#    #+#             */
/*   Updated: 2024/09/14 11:43:03 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

template <typename T> void easyfind(T & container, int i)
{
    try{
        
        typename T ::iterator  it = std::find(container.begin(),container.end(), i);
        if (it == container.end())
            throw "Error : Not found";
        else
            std::cout << "Found at index >>  " << std::distance(container.begin(), it) << std::endl;
    }
    catch (const char * e)
    {
        std::cout << e << std::endl;
    }
}


#endif
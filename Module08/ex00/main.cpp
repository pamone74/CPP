/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:29:00 by pamone            #+#    #+#             */
/*   Updated: 2024/09/14 11:42:49 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
    std::vector<int> Vector_Array;
    Vector_Array.push_back(20); 
    Vector_Array.push_back(10); 
    Vector_Array.push_back(0); 
    easyfind(Vector_Array, 100);
}
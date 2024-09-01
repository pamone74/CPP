/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:57:05 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 17:11:43 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void display(T param)
{
    std::cout << param << std::endl;
}

int main() {
  int arry1[] = { 0, 1, 2, 3, 4, 5 , 6, 8 };
  std::string array2[3];
  array2[0] = "42 ";
  array2[1] = "42 Abu ";
  array2[2] = "42 Abu Dhabi";

  iter( arry1, 8, display< int> );
  std::cout << "\nTest 02 \n" << std::endl;
  iter( array2, 3, display<std::string> );

  return 0;
}
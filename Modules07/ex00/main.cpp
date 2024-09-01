/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:37:46 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 16:45:19 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main(void)
{
    // Tests
   int a = 2;
 int b = 3;
 ::swap( a, b );
 std::cout << "a = " << a << ", b = " << b << std::endl;
 std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
 std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
 
 

 // string 
 std::string c = "chaine1";
 std::string d = "chaine2";


  ::swap(c, d);
 std::cout << "c = " << c << ", d = " << d << std::endl;
 std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
 std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
 return 0;
}
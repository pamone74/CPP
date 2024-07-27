/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:29:30 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 12:35:29 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main(void)
{
    {
        std::cout << "010101010101010-------------Test 01 ----------01010101010101010101010" << std::endl;
        FragTrap trap1;
        trap1.getInfo();
        
    }
    
    {
        std::cout << "020202020202020-------------Test 02 ----------02020202020202020202020" << std::endl;
        FragTrap trap1("Patrick");
        trap1.getInfo();
        std::cout << trap1.getName() << std::endl;

        FragTrap trap2; 
        trap2 = trap1;
        
    }
    {
        std::cout << "030303030303030-------------Test 03 ----------03030303030303030303030" << std::endl;
        FragTrap trap1("Patrick");
        FragTrap trap2("Pamone");
        trap1.getInfo();
        trap1.attack(trap2.getName());
        // I am using the function from base class directly without modification
        std::cout << trap1.getName() << std::endl;
         trap1.getInfo();
         trap1.getInfo();
         
         trap1.beRepaired(100);
        
        
    }

  
    
}
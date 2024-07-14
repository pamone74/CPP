/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:43:07 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 20:47:20 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int  main(void)
{
    Zombie * zom = zombieHorde(5, "Amone");
    for(int i(0); i < 5; i++)
    {
        std::cout << "This is Zombie" << i << std::endl;
        zom[i].announce();
    }
    
    delete []zom;
}
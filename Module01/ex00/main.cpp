/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:23:37 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 20:37:36 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    try{
        zombie = newZombie("Amone");
        zombie->announce();
    }
    catch(std::bad_alloc &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete zombie;

    randomChump("Just Another Zombie");
    return (0);
}
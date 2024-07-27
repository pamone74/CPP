/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:29:30 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 11:09:23 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap player1("Patrick");
    ScavTrap player2("Pamone");
    
    // player1.setDamage(1);
    // player2.setDamage(1);
    
    player1.getInfo();
    player2.getInfo();
    
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    
    player1.getInfo();
    player2.getInfo();
    
    player2.takeDamage(1);
    player1.takeDamage(1);

    // player1.beRepaired(100);
    // player2.beRepaired(100);

  
    
}
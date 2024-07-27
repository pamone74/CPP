/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:29:30 by pamone            #+#    #+#             */
/*   Updated: 2024/07/20 20:08:52 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap player1("Patrick");
    ClapTrap player2("Pamone");
    
    player1.setDamage(1);
    player2.setDamage(1);
    
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    
    player2.takeDamage(1);
    player1.takeDamage(1);

    player1.beRepaired(100);
    player2.beRepaired(100);

    player1.getInfo();
    player2.getInfo();
    
}
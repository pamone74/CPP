/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:26:01 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 20:51:01 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnzzzZ" << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << name << " is dead" << std::endl;
}

std::string Zombie::setName(std::string name)
{
    this->name = name;
    return name;
}
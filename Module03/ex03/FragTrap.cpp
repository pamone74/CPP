/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:49:14 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 13:26:49 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
 FragTrap::FragTrap(void)
 {
    initialize();
    std::cout << "-----------|| FragTrap Default constructor is Called |----------" << std::endl;
 }

 FragTrap::FragTrap(std::string name):ClapTrap(name)
 {
    initialize();
    std::cout << "-----------|| FragTrap Parameterized constructor is Called |----------" << std::endl;
 }

FragTrap::~FragTrap()
{
    std::cout << "----******--|| FragTrap destructor is Called |---*******---" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap):ClapTrap(fragtrap)
{
    std::cout << "---copy---|| FragTrap Copy Constructor is Called |---copy---" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    if(this == &fragtrap)
    {
        return *this;
    }
    ClapTrap::operator=(fragtrap);
    std::cout << "---copy Assignment---|| FragTrap Copy Assignment Constructor is Called |---copy---" << std::endl;
    return *this;
}

// other functions
void FragTrap::setHit(int amount)
{
    ClapTrap::setHit(amount);
}
void FragTrap::setAttackDamage(int amount)
{
    ClapTrap::setAttackDamage(amount);
}

void FragTrap::setEnergy(int amount)
{
    ClapTrap::setEnergy(amount);
}
void FragTrap::setDamage(int amount)
{
    ClapTrap::setDamage(amount);
}

void FragTrap::initialize(void)
{   
    highFivesGuys();
    setHit(100);
    setAttackDamage(30);
    setEnergy(100);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "================= Initializing Constructor now   [Positive High Five] ==================" << std::endl;
}
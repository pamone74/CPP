/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 01:31:38 by pamone            #+#    #+#             */
/*   Updated: 2024/07/22 13:50:10 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <csignal>

// Derived class constructor
ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "========>> ScavTrap Constructor <<===============" << std::endl;
}
// Constructor with a name parameter
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    guardGate();
    // _name = "ScavTrap";
    _attack_damage = 20;
    _energy_points =  50;
    _hit_points = 100;
    std::cout << "=======>> ScavTrap Paramiterized Constructor << ============" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &scavtrap):ClapTrap(scavtrap)
{
    
}
ScavTrap &ScavTrap::operator=(const ScavTrap & scavtrap)
{
    if(this == &scavtrap)
        return *this;
    ClapTrap::operator=(scavtrap);
    *this = scavtrap;
    return *this;
}


void ScavTrap::setDamage(int damge)
{
    ClapTrap::setDamage(damge);
}

void ScavTrap::attack(const std::string &target)
{
    // ClapTrap::attack(target);
     if(this->_hit_points > 0 && this->_energy_points > 0)
    {
        // attack
        this->_hit_points -= this->_attack_damage;
        std::cout << "======== >> ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " Points of damage << ==========" << std::endl;
        
    }
}

std::string  ScavTrap::getName(void) const
{
   return  ClapTrap::getName();
}

void ScavTrap::takeDamage(int damage)
{
    ClapTrap::takeDamage(damage);
   
}

void ScavTrap::beRepaired(int amount)
{
    ClapTrap::beRepaired(amount);
}
ScavTrap::~ScavTrap()
{
    std::cout << "=========>>  ScavTrap Destructor Called <<======== " << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "=========>> ScavTrap is now in gatekeeper mode! <<=========" << std::endl;
}
 void ScavTrap::getInfo(void)
 {
    ClapTrap::getInfo();
 }
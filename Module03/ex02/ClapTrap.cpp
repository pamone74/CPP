/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:23:36 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 10:18:01 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstddef>
#include <string>

// Constructors
ClapTrap::ClapTrap(std::string name) :_name(name),_hit_points(100), _energy_points(50), _attack_damage(20)
{
    std::cout << "Paramiterized ClapTrap Constructor Called" << std::endl;
}
ClapTrap:: ClapTrap()
{
    std::cout << "Default ClapTrap Constructor Called" << std::endl;
    _name = "ClapTrap";
    _attack_damage = 20;
    _energy_points = 50;
    _hit_points = 50;
    
}
ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
    std::cout << "Copy Clap Assignment operator" << std::endl;
    if(this == &claptrap)
        return *this;
    _name = claptrap._name;
    _attack_damage = claptrap._attack_damage;
    _energy_points = claptrap._energy_points;
    _hit_points = claptrap._hit_points;
    
    return *this;
}
ClapTrap :: ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "Copy ClapTrap Constructor Called" << std::endl;
    _name = claptrap._name;
    _attack_damage = claptrap._attack_damage;
    _energy_points = claptrap._energy_points;
    _hit_points = claptrap._hit_points;
}

ClapTrap :: ~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

//  Attack

void ClapTrap :: setDamage(int damage)
{
    this->_attack_damage = damage;
}
void ClapTrap::attack(const std::string& target)
{
    if(this->_energy_points > 0 && this->_hit_points > 0)
    {
        takeDamage(this->_attack_damage);
        this->_hit_points -= this->_attack_damage;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " Points of damage" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_energy_points  -= amount;
    std::cout << "ClapTrap " << this->_name << " took damage " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(amount > 0 && amount <= 10)
    {
        this->_hit_points += amount;
        this->_energy_points -= 1;
    }
    else if(this->_energy_points == 0)
    {
         std::cout << "ClapTrap " << this->_name << " Dead" << std::endl;
    }
    else if(amount > 100)
    {
        this->_hit_points = 100;
         this->_energy_points -= 1;
    }
    
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::getInfo() const{
    std::cout << std::endl;
    std::cout << "Player          ::  " << this->_name << std::endl;
    std::cout << "Energy Points   ::  " << this->_energy_points << std::endl;
    std::cout << "Hit Points      ::  " << this->_hit_points << std::endl;
    std::cout << "Attack Damage   ::   " << this->_attack_damage << std::endl;
    std::cout << std::endl;
}
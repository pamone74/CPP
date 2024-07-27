/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:54:47 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 11:10:54 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        ClapTrap(); // Default constructor
        ~ClapTrap(); // Destructor
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap); // copy constructor
        ClapTrap &operator=(ClapTrap const &claptrap); // copy asignment operator
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setDamage(int damage);
        std::string getName(void)const;
        void getInfo(void) const;

        // Added new getters and setters
        void setHit(int hitpoint);
        void setEnergy(int energy);
        void setAttackDamage(int attack);
        
};
        
#endif
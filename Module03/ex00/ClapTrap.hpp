/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:54:47 by pamone            #+#    #+#             */
/*   Updated: 2024/07/18 12:09:17 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_point;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap &operator=(ClapTrap const &claptrap);
        void attack(const std::string& target);
        void takeDamge(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setDamage()
    
};

#endif
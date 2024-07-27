/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:23:38 by pamone            #+#    #+#             */
/*   Updated: 2024/07/22 09:43:50 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <csignal>

class ScavTrap: public ClapTrap{
    
    public:
    ScavTrap(); // Default constructor
    ~ScavTrap(); // Destructor
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavtrap); // Copy constructor  
    ScavTrap &operator=(const ScavTrap &scavtrap); // Copy assignment operator. 
    void guardGate();
    // redefining the bas memeber function
    void setDamage(int damage);
    void attack(const std::string &target);
    std::string getName(void) const;
    void takeDamage(int damage);
    void beRepaired(int amount);
    void getInfo(void);
    
};
#endif
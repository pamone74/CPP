/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 06:26:59 by pamone            #+#    #+#             */
/*   Updated: 2024/07/26 06:32:12 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap:public ScavTrap, public FragTrap{
    

    DiamondTrap(std::string name); // Parameterized contructor. 
    DiamondTrap(void); // Default Constructor 
    DiamondTrap(const DiamondTrap  &diamontrap); // Copy constructor
    DiamondTrap &operator=(const DiamondTrap &diamondtrap); // Copy assignment operator
    ~DiamondTrap(void); // Destructor
};

#endif
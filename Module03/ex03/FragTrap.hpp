/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:29:35 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 13:27:02 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap:public ClapTrap{
    
    
    public:
        FragTrap(std::string name); // Parameterized constructor
        FragTrap(void); // Default constructor
        FragTrap &operator=(const FragTrap &fragtrap); // Copy Assignment constractor
        FragTrap (const FragTrap &fragtrap); // Copy constractor
        ~FragTrap(void); // Destructor
        void setHit(int amount);
        void setEnergy(int amount);
        void setAttackDamage(int amount);
        void setDamage(int amount);
        
        // void beRepaired(int amount);
        void highFivesGuys(void);
        void initialize(void);
        // void getInfo(void);
};




#endif


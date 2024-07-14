/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:32:27 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 22:53:06 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon *weapon;

    public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void);
};


#endif
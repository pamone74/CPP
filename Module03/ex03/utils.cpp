/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:49:43 by pamone            #+#    #+#             */
/*   Updated: 2024/07/24 11:09:57 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
void ClapTrap::setHit(int amount)
{
    this->_hit_points = amount;
}

void ClapTrap::setEnergy(int amount)
{
    this->_energy_points = amount;
}

void ClapTrap::setAttackDamage(int amount)
{
    this->_attack_damage = amount;
}

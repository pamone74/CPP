/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   All.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:59:16 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 23:01:07 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
#define ALL_H

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA(std::string name, Weapon &weapon);
HumanB(std::string name);
void attack(void);
void HumanB::attack(void);
void setWeapon(Weapon &weapon);
void HumanB::setWeapon(Weapon &weapon);


#endif
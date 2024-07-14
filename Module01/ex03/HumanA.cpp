/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:34:04 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 22:45:31 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
void HumanA:: attack(void)
{
    std::cout << name << " attacks with there " << weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}
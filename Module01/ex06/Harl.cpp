/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:19 by pamone            #+#    #+#             */
/*   Updated: 2024/07/15 18:55:50 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" <<  std::endl;
    std::cout << "I love having bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" <<  std::endl;
    std::cout << "I cannot believe adding extra bacon costs extra more money. You didn't put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" <<  std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" <<  std::endl;
    std::cout << "This is unacceptable, I want to speak to your manager now" << std::endl;
}

int Harl::getLevel(std::string level) {
    if (level == "DEBUG") return 0;
    if (level == "INFO") return 1;
    if (level == "WARNING") return 2;
    if (level == "ERROR") return 3;
    return -1;
}
void Harl::complain(std::string level) {
    switch (getLevel(level)) {
        case 0:
            debug();
            info();
            break;
        case 1:
            info();
            warning();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            debug();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:19 by pamone            #+#    #+#             */
/*   Updated: 2024/07/15 12:17:00 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "I love having bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs extra more money. You didn't put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable, I want to speak to your manager now" << std::endl;
}

void Harl::complain(std::string level) {
    typedef void (Harl::*HarlMemFn)(void); // The alias for member function pointer
    struct LevelMap {
        std::string level;
        HarlMemFn fn;
    };

    LevelMap levels[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };

   for (int i = 0; i < 4; ++i) {
        if (level == levels[i].level) {
            (this->*(levels[i].fn))();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}

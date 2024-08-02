/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:47:22 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 14:07:35 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "The Default Constructor of WrongAnimal Class is called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal:: WrongAnimal(const WrongAnimal &wrong)
{
    std::cout << "The Copy Constructor of WrongAnimal Class is called" << std::endl;
    type = wrong.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong)
{
    std::cout << "The Copy assignment operator Constructor of WrongAnimal Class is called" << std::endl;
    if(this == &wrong)
        return *this;
    type = wrong.type;
    return *this;
}

WrongAnimal :: ~WrongAnimal(void)
{
    std::cout << "The Destructor of WrongAnimal Class is called" << std::endl;
}

void WrongAnimal::makeSound(void)const{
    std::cout << "XXXXX🚀🚀🚀🚀  .......Wrong..... 🚀🚀🚀🚀XXXXX" << std::endl;
}

std::string WrongAnimal ::getType(void) const{
    return this->type;
}
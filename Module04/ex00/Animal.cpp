/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:00:21 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:53:52 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal(void)
{
    std::cout << "Animal default constructor Called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor Called" << std::endl;
    type = animal.type;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal Assignment copy constructor Called" << std::endl;
    if(this == &animal)
        return *this;
    type = animal.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
     std::cout << "UNKNOWN ANIMAL " << std::endl;;
}

std::string Animal::getType(void) const{
    return this->type;
}
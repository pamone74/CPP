/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:26:18 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 14:06:21 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default constructor called " << std::endl;
    type = "Dog";
}
Dog::Dog(const Dog &dog): Animal()
{
    std::cout << "Dog Copy constructor called " << std::endl;
    type = dog.type;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Copy Assignent constructor called " << std::endl;
    if(this == &dog)
        return *this;
    type = dog.type;
    return *this;
    
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called " << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << " 🐕🐕🐕🐕🐕🐕🐕🐕 🐕 Bark 🐕🐕🐕🐕🐕🐕🐕🐕🐕" << std::endl; 
}
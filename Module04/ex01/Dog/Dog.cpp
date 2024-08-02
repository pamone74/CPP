/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:26:18 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:13:14 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): brain(new Brain())
{
    std::cout << "Dog Default constructor called " << std::endl;
    type = "Dog";
}
Dog::Dog(const Dog &dog): Animal()
{
    brain =  new Brain(*dog.brain);
    std::cout << "Dog Copy constructor called " << std::endl;
    type = dog.type;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Copy Assignent constructor called " << std::endl;
    if(this == &dog)
        return *this;
    delete brain;
    brain =  new Brain(*dog.brain);
    type = dog.type;
    return *this;
    
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called " << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << " 🐕🐕🐕🐕🐕🐕🐕🐕 🐕 Bark 🐕🐕🐕🐕🐕🐕🐕🐕🐕" << std::endl; 
}
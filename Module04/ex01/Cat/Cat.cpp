/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:13:43 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:03:22 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "/workspaces/CPP/Module04/ex01/Animal/Animal.hpp"

Cat::Cat(void): brain (new Brain())
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type = "Cat";
}
Cat::Cat(const Cat &cat): Animal()
{
    brain = new Brain(*cat.brain);
    std::cout << "Cat Copy Constructor Called" << std::endl;
    type = cat.type;
}
Cat &Cat::operator=(const Cat &cat)
{
    if(this == &cat)
        return *this;
    delete brain; // clear it existing resources 
    brain = new Brain(*cat.brain);
    std::cout << "Cat Copy Assignment Constructor Called" << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "🐈🐈 🐈 🐈 🐈 🐈 🐈  MEOW  🐈 🐈 🐈 🐈 🐈 🐈 🐈 " << std::endl;
}
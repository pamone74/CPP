/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:13:43 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 14:04:28 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    type = "Cat";
}
Cat::Cat(const Cat &cat): Animal()
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    type = cat.type;
}
Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat Copy Assignment Constructor Called" << std::endl;
    if(this == &cat)
        return *this;
    type = cat.type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "🐈🐈 🐈 🐈 🐈 🐈 🐈  MEOW  🐈 🐈 🐈 🐈 🐈 🐈 🐈 " << std::endl;
}
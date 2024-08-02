/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:47:22 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:21:30 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
WrongCat::WrongCat(void)
{
    std::cout << "The Default Constructor of WrongCat Class is called" << std::endl;
    type = "WrongCat";
}

WrongCat:: WrongCat(const WrongCat &wrong): WrongAnimal()
{
    std::cout << "The Copy Constructor of WrongCat Class is called" << std::endl;
    type = wrong.type;
}

WrongCat &WrongCat::operator=(const WrongCat &wrong)
{
    std::cout << "The Copy assignment operator Constructor of WrongCat Class is called" << std::endl;
    if(this == &wrong)
        return *this;
    type = wrong.type;
    return *this;
}

WrongCat :: ~WrongCat(void)
{
    std::cout << "The Destructor of WrongCat Class is called" << std::endl;
}

void WrongCat::makeSound(void)const{
    std::cout << "X .......For Wrong Cat ..... X" << std::endl;
}
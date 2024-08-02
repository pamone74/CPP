/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:06:59 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:56:59 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    // wrong one
    const WrongAnimal *wrong = new WrongCat();

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    // wrong one
    wrong->makeSound();

    
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << wrong->getType() << " " << std::endl;
    delete meta;
    delete i;
    delete j;
    delete wrong;
    
}
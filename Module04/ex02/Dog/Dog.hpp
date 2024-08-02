/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:14:31 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:11:19 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "/workspaces/CPP/Module04/ex01/Animal/Animal.hpp"
#include "/workspaces/CPP/Module04/ex01/Brain/Brain.hpp"

class Dog:public Animal{
    
    private:
        Brain *brain;
    public:
        Dog(void); // Default constructor
        Dog(Dog const &dog);
        Dog &operator=(const Dog &dog);
        ~Dog(void);
        void makeSound(void) const;
};


#endif
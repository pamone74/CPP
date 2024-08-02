/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:14:31 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 12:40:39 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog:public Animal{
    

    public:
        Dog(void); // Default constructor
        Dog(Dog const &dog);
        Dog &operator=(const Dog &dog);
        ~Dog(void);
        void makeSound(void) const;
};


#endif
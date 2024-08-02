/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:29:06 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:13:03 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
    protected:
        std::string type;

    public:
        Animal(void); // default constructor
        Animal(std::string &name); // parameterized constructor not part of orthodox cannonical form
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal(void);
        virtual void  makeSound(void) const;
        std::string getType(void) const;

};

#endif
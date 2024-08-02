/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:07:02 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:04:15 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "/workspaces/CPP/Module04/ex01/Animal/Animal.hpp"
#include "/workspaces/CPP/Module04/ex01/Brain/Brain.hpp"

class Cat:public Animal{
    private:
        Brain *brain;
    public:
    Cat(void);
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    ~Cat(void);
    void makeSound(void) const;
};

#endif
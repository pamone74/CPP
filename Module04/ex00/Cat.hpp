/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:07:02 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:25:32 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat:public Animal{
    public:
    Cat(void);
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    ~Cat(void);
    void makeSound(void) const;
};

#endif
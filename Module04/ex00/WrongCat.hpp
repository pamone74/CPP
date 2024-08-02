/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:47:25 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:50:09 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
    public:
       WrongCat(void);
        WrongCat(const WrongCat &wrong);
        WrongCat &operator=(const WrongCat &wrong);
        virtual ~WrongCat(void);
        void makeSound(void) const;  
    
};

#endif
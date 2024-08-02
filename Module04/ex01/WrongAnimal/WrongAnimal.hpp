/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:35:10 by pamone            #+#    #+#             */
/*   Updated: 2024/07/29 13:55:01 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CPP
#define WRONGANIMAL_CPP
#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wrong);
        WrongAnimal &operator=(const WrongAnimal &wrong);
        virtual ~WrongAnimal(void);
        void makeSound(void) const;
        std::string getType(void) const;
    
    
};

#endif


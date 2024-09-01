/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:15:47 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 13:27:27 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.h"

class Serializer{
    private:
        Serializer(void);
        Serializer (const Serializer &serializer);
        Serializer &operator=(const Serializer &serializer);
        ~Serializer(void);

    public:
        // other functions
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        
    
};




#endif
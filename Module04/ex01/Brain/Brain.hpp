/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brian.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:04:37 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:08:24 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain{
    
    public:
        std::string ideas[100];
        
        Brain(void);
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        ~Brain(void);
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:26:02 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 20:09:34 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called " << std::endl;
    for(int i(0); i < 100; i++)
    {
        ideas[i] = "null";
    }
}
Brain::Brain(const Brain &brain)
{
    std::cout << "Brain Copy constructor called " << std::endl;
    for(int i(0); i < 100; i++)
    {
        ideas[i] = brain.ideas[i];
    }
}
Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain Copy assignment constructor called " << std::endl;
    if(this == &brain)
        return *this;
    for(int i(0); i < 100; i++)
    {
       ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called " << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:52:02 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:30:02 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "A_Animal.hpp"

class Brain
{
    protected:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &brain);
        Brain &operator=(Brain const &brain);
        ~Brain(void);
};

#endif
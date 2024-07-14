/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:26:08 by pamone            #+#    #+#             */
/*   Updated: 2024/07/13 20:36:56 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie
{
    std::string name;

    public:
    void announce(void);
    std::string getName(void);
    Zombie(std::string name);
    ~Zombie();

};

Zombie * newZombie(std::string name);
void randomChump(std::string name);

#endif
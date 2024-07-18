/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:42:48 by pamone            #+#    #+#             */
/*   Updated: 2024/07/15 13:14:18 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

        int getLevel(std::string level);
    
    public:
        void complain(std::string level);
};


#endif
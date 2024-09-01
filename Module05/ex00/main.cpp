/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abushabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:48:08 by pamone            #+#    #+#             */
/*   Updated: 2024/08/26 08:48:12 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <endian.h>


int main(void)
{
    {
        try
        {
         // Instatiation
            Bureaucrat be("Patrick", 5);
            be.decrement();
            be.increment();
            std::cout << be << std::endl;
        } 
        catch ( std::exception &e )
        {
            std::cout << e.what() << std::endl;
        }
        catch(...)
        {
            std::cout << "Ooops" << std::endl;
        }
   
      }
      // Test 02:
      {
        try{
            Bureaucrat be;
            be.decrement();
            
            std::cout << be << std::endl;
        }
        catch ( const Bureaucrat::GradeTooHighException &e )
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(...)
        {
            std::cout << "Ooops" << std::endl;
        }
      }
      
   
}
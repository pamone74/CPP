/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:48:31 by pamone            #+#    #+#             */
/*   Updated: 2024/08/26 16:02:49 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_H
#define BUREACRAT_H

#include <exception>
#include <iostream>
#include <ostream>
class Form;
class Bureaucrat{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(void); // Default constructor
        Bureaucrat(const std::string name, int grade);
        Bureaucrat (const Bureaucrat &bureacrat);
        Bureaucrat &operator=(const Bureaucrat &bureacrat);
        ~Bureaucrat(void);
        std::string getName(void)const;
        int getGrade(void) const;
        void increment(void) ;
        void decrement(void) ;

        void signForm(Form &form);
        //  class for the exception

        class GradeTooHighException:public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        
        class GradeTooLowException:public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os,const Bureaucrat &bureaucrat);

#endif
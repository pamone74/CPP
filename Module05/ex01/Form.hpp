/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:13:27 by pamone            #+#    #+#             */
/*   Updated: 2024/08/28 10:48:45 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"
class Form{

    private:

    
        std::string _name;
        bool   _signed;
        const int _grade;
        const int _execute;
        
    public:
        Form(void);
        Form (std::string name, int execute, int grade);
        Form(const Form &form);
        Form const &operator=(const Form &form);
        ~Form(void);

    // getters  of the FORM
    
    const std::string &getName() const;
    const bool &getSigned(void)const;
    const int &getGrade(void)const;
    const int &getExecute(void)const;
    
    // member function
    void beSigned(Bureaucrat bureaucrat);
    

    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char * what() const throw();  
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char * what() const throw();  
    };
      
};


std::ostream &operator<<(std::ostream &out, const Form &form);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:08:50 by pamone            #+#    #+#             */
/*   Updated: 2024/08/26 16:23:17 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):_name("DEFAULT FORM") ,_signed(0), _grade(10), _execute(20){}

Form::Form(std::string name, int execute, int grade):  _name(name),_signed(0),  _grade(grade),_execute(execute)

{
    if(_grade < 1)
        throw Form::GradeTooHighException();
    else if (_grade > 150)
        throw Form::GradeTooLowException();
    if(_execute < 1)
        throw Form::GradeTooHighException();
    else if (_execute > 150)
        throw Form::GradeTooLowException();
}
Form::Form(const Form &form):_name(form._name),_signed(form._signed), _grade(form._grade), _execute(form._execute) 
{
    *this = form;
}

Form const &Form::operator=(const Form &form)
{
    if(this == &form)
        return *this;
    this->_signed = form._signed;
    return *this;
    
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << form.getName() << " " << form.getGrade() << " " << form.getExecute() << " " << form.getSigned() << std::endl;
    return out;
}

// be signed

void Form::beSigned(Bureaucrat buresucrat)
{
    if(buresucrat.getGrade() <= this->_grade)
    {
          _signed = 1;
          std::cout << buresucrat.getName() << " Successfully signed form " << this->getName() << std::endl;
    }
    else
     throw Form::GradeTooLowException();
}

// getters

std::string  const &Form::getName(void) const
{
    return this->_name;
}

const bool &Form::getSigned(void) const
{
    return this->_signed;
}

const int & Form:: getGrade(void) const{
    return this->_grade;
}

const int& Form::getExecute(void) const
{
    return  this->_execute;
}

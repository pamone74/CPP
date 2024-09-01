/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:47:58 by pamone            #+#    #+#             */
/*   Updated: 2024/08/26 16:03:44 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name("bureaucrat")
{
    grade = 1;
}
Bureaucrat::Bureaucrat(const std::string name, int gradeB): name(name)
{
    if(gradeB >= 1 && gradeB <= 150)
    {
        this->grade = gradeB;
    }
    else if(gradeB < 1)
      throw Bureaucrat::GradeTooHighException();
    else
     throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &bureacrat):name(bureacrat.name)
{
    grade = bureacrat.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureacrat)
{
    if(this == &bureacrat)
        return *this;
    grade = bureacrat.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
    
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void)const
{
    return this->grade; 
}

void Bureaucrat::increment(void)
{
    if(grade > 1 )
        grade --;
    else
        throw Bureaucrat::GradeTooHighException();
    
}

void Bureaucrat::decrement(void)
{
    if(grade >= 1 && grade <= 150 )
        grade ++;
    else
        throw Bureaucrat::GradeTooLowException();
    
}

// exception 

const char * Bureaucrat :: GradeTooHighException:: what() const throw()
{
    return "Grade Too High";
    
}

const char * Bureaucrat :: GradeTooLowException :: what() const throw()
{
    return "Grade Too Low";
}

// overloading << 
std::ostream &operator<<(std::ostream &os,const Bureaucrat &bureaucrat)
{
    os  << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}
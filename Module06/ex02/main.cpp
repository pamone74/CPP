/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:57:28 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 14:00:36 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
	int	rand = std::rand() % 3;

	if (rand == 0) {
		std::cout << "[Base] " "A class generated" << std::endl;
		return (new A());
	}
	else if (rand == 1) {
		std::cout << "[Base] " "B class generated" << std::endl;
		return (new B());	
	} else {
		std::cout << "[Base] " "C class generated" << std::endl;
		return (new C());
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout <<  "[Base] " "Identify as " "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout <<  "[Base] " "Identify as " "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout <<  "[Base] " "Identify as " "C" << std::endl;
	else
		std::cout << "[Base] " "An error occured while identifying" << std::endl;
}

void	identify(Base &p) {
	try {
		A	&tmp = dynamic_cast<A&>(p);
		
		std::cout <<  "[Base] " "Identify as " "A" << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	try {
		B	&tmp = dynamic_cast<B&>(p);
		
		std::cout <<  "[Base] " "Identify as " "B" << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	try {
		C	&tmp = dynamic_cast<C&>(p);
		
		std::cout <<  "[Base] " "Identify as " "C" << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	std::cout << "[Base] " "An error occured while identifying" << std::endl;
}

int	main(void) {
	Base	*base;

	srand(time(NULL));
	std::cout << "\n>>> RUNNING SUBJECT TESTS\n" << std::endl;
	/* Generating random class */
	base = generate();
	identify(base);
	identify(*base);
	delete base;

	return (0);
}
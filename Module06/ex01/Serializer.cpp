/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:28:34 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 13:28:35 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

/* Constructors & Destructors */
Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const &serializer) {
	(void) serializer;
}

Serializer::~Serializer(void) {}

/* Functions */

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/* Overloaded operators */
Serializer	&Serializer::operator=(Serializer const &serializer) {
	(void) serializer;
	return (*this);
}
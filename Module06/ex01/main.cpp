/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:33:48 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 13:42:23 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	test(void) {
	std::cout << "\n=======TEST=========\n" << std::endl;
	
	Data	data;

	data._id = 42;
	std::cout <<  "Original pointer: " << &data  << std::endl;
    
	// serialize and then deserialize the pointer
	uintptr_t	serialized = Serializer::serialize(&data);
	Data	*deserialized = Serializer::deserialize(serialized);
	
	std::cout << "Serialized data: " << serialized  << std::endl;
	std::cout << "Deserialized pointer: "  << deserialized << std::endl;

    
	// compare
	if (deserialized == &data)
		std::cout <<  "[OK] "<< "Deserialized pointer is equal to original pointer" << std::endl;
	else
		std::cout << "[KO] " << "Deserialized pointer is not equal to original pointer" << std::endl;
}

int	main(void) {
	test();
	return (0);
}
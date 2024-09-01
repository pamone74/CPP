/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:38:37 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 13:14:01 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::string	literal = argv[1];
		try {
			ScalarConverter::convert(literal);	
		} catch (std::exception &exception) {
			std::cout << "[ScalarConverter] " << "Exception caught!" << std::endl;
			std::cout << exception.what() << std::endl;
		}
	}
	else std::cout << "[ScalarConverter] " << "Usage: ./convert <literal>" << std::endl;
	return (0);
}
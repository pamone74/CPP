/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:33:40 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 17:36:10 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main(void)
{
    {
        std::cout <<  "\n>>> RUNNING VALID TESTS\n"  << std::endl;
	/* Accessing valid index */
	std::cout <<  "[!] Accessing index 2 in array of 4"  << std::endl;
	try {
		Array<int>	arr(4);

		std::cout << "arr[2] before: " << arr[2] << std::endl;
		arr[2] = 42;
		std::cout << "arr[2] after: " << arr[2] <<   std::endl;
	} catch (std::exception &exception) {
		std::cout << "[Array] "  "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Iterating over array of 4 */
	std::cout <<  "[!] Interating in array of 4"  << std::endl;
	try {
		Array<char>	arr(4);

		for (int i = 0; i < 4; i++)
			arr[i] = 'a' + i;
		for (int i = 0; i < 4; i++)
			std::cout << "arr[" << i << "] = " << arr[i] <<  std::endl;
	} catch (std::exception &exception) {
		std::cout <<  "[Array] "  "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

}
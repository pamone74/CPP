/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:20:25 by pamone            #+#    #+#             */
/*   Updated: 2024/10/22 10:20:26 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Error: could not open file" << std::endl;
		return (EXIT_FAILURE);
	}

	BitcoinExchange exchange;

	exchange.run(av[1]);

	return (EXIT_SUCCESS);
}
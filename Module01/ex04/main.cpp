/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:33:12 by pamone            #+#    #+#             */
/*   Updated: 2024/07/15 12:33:17 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

typedef std::string str;
void	replace(str &line, str first, str second) {
	size_t	startPos = 0;

	while ((startPos = line.find(first, startPos)) != str::npos) {
		line = line.substr(0, startPos) + second + line.substr(startPos + first.length());
		startPos += second.length();
	}
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Opps! Try again ./replace <FILE NAME> <FIND> <REPLACE>" << std::endl; return 0;
	}
	
	str				in_file = av[1];
	str				first = av[2];
	str				second = av[3];
	str				line;
	std::ifstream	input(in_file.c_str());
	if (input.is_open()) {
        str				out_file = in_file + ".replace";
	    std::ofstream	output(out_file.c_str());
		while (std::getline(input, line)) {
			replace(line, first, second);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
        // std::cout << "Find your" << std::endl;
	}
	else
		std::cout << "Error: cannot open file." << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:28:14 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 17:39:25 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <class T> class Array {

	private:
		T				*_array;
		unsigned int	_length;
		
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &origin);
		~Array(void);

		/* Exceptions */
		class OutOfBoundsException : public std::exception {
			public:
				virtual const char*	what() const throw();	
		};

		/* Functions */
		unsigned int	size(void) const;

		/* Overloaded operators */
		Array	&operator=(const Array &origin);
		T		&operator[](unsigned int i);
		const T	&operator[](unsigned int i) const;

};

// Includeing class methods implementation
#include "Array.tpp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:33:35 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 17:33:36 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP


template <class T> Array<T>::Array(void)
{
    this._length = 0;
    this->array = new T[0];
}
template <class T> Array<T>::Array(unsigned int n) {
	this->_length = n;
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
}

template <class T> Array<T>::Array(const Array &origin) {
	this->_length = origin._length;
	this->_array = new T[origin._length];
	for (unsigned int i = 0; i < origin._length; i++)
		this->_array[i] = origin._array[i];
}

template <class T> Array<T>::~Array(void) {
	delete[] this->_array;
}

/* Exceptions */
template <class T> const char*	Array<T>::OutOfBoundsException::what() const throw() {
	return ("Index is out of range");
}

/* Functions */
template <class T> unsigned int	Array<T>::size(void) const {
	return (this->_length);
}

/* Overloaded operators */
template <class T> Array<T>	&Array<T>::operator=(const Array &origin) {
	delete[] this->_array;
	this->_array = new T[origin._length];
	this->_length = origin._length;
	for (unsigned int i = 0; i < origin._length; i++)
		this->_array[i] = origin._array[i];
	return (*this);
}

template <class T> T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->_length)
		throw Array<T>::OutOfBoundsException();
	return (this->_array[i]);
}

template <class T> const T	&Array<T>::operator[](unsigned int i) const {
	if (i >= this->_length)
		throw Array<T>::OutOfBoundsException();
	return (this->_array[i]);
}

#endif
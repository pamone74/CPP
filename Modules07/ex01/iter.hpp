/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:48:59 by pamone            #+#    #+#             */
/*   Updated: 2024/08/31 16:56:48 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *array, size_t length, F function )
{
   for(size_t i(0); i < length; i++) 
   {
         function(array[i]);
   }
}


#endif
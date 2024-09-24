/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 03:50:16 by pamone            #+#    #+#             */
/*   Updated: 2024/09/24 01:17:01 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>
/**
 * @brief A template class MutantStack that extends the functionality of std::stack.
 * 
 * The `MutantStack` class is a stack-like data structure, but with additional
 * functionality to allow iteration through the stack using standard iterators.
 * It inherits from `std::stack`, which by default uses `std::deque` as the underlying
 * container, but the container can be customized.
 * 
 * @tparam T The type of the elements stored in the stack.
 * @tparam Container The underlying container type. By default, it's `std::deque<T>`.
 * 
 * This class adds the ability to:
 * - Use iterators (`begin()` and `end()`) to iterate through the elements of the stack,
 *   which is not possible with the standard `std::stack`.
 * 
 * The `MutantStack` class retains the full functionality of a stack, including LIFO
 * operations (`push`, `pop`, `top`, etc.), but also allows you to iterate through the
 * container.
 */
template< typename T, class Container = std::deque< T > > // to specify the default container tyrpe that will be used to store the the elements int the stack if no ohter container type is provided by the user.
class MutantStack : public std::stack< T, Container >
{

private:

public:

    MutantStack( void ) {};
    ~MutantStack( void ) {};

    MutantStack( const MutantStack& rhs ) { *this = rhs; }
    MutantStack&    operator=( const MutantStack& rhs ) {
        std::stack< T, Container >::operator=( rhs );
        return *this;
    }

    typedef typename Container::iterator    iterator;

    iterator    begin() { return this->c.begin(); }
    iterator    end() { return this->c.end(); }
};
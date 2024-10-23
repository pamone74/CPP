/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:47:14 by pamone            #+#    #+#             */
/*   Updated: 2024/10/15 20:47:15 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <exception>

class RPN {
    public:
        RPN(void);
        RPN(const RPN &to_copy);
        RPN &operator=(const RPN &to_copy);
        ~RPN(void);

        static bool valid_expression(const std::string& expr);
        static long long calculate(const std::string& expr);

        class NoResultException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };

        class DivisionByZeroException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };
};

#endif // RPN_HPP
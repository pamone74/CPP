/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:06:59 by pamone            #+#    #+#             */
/*   Updated: 2024/07/31 19:29:52 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/workspaces/CPP/Module04/ex01/Animal/Animal.hpp"
#include "/workspaces/CPP/Module04/ex01/Dog/Dog.hpp"
#include "/workspaces/CPP/Module04/ex01/Cat/Cat.hpp"
#include "/workspaces/CPP/Module04/ex01/WrongAnimal/WrongAnimal.hpp"
#include "/workspaces/CPP/Module04/ex01/WrongCat/WrongCat.hpp"
#include "/workspaces/CPP/Module04/ex01/Brain/Brain.hpp"

int main(void)
{

    // test from Subject. 
    // {
        // const Animal *j = new Dog();
        // const Animal *i = new Cat();
        // delete i;
        // delete j;  
    // }

    // {
    //    int arryNum = 5;
        // Animal *animal[arryNum];

    //    Creating object of Dog
        // for(int i(0); i < arryNum/2; i++)
        // {
            // animal[i] = new Dog();
        // }

        // Creating Object of cat
        // for(int i(arryNum/2); i < arryNum; i++)
        // {
            // animal[i] = new Cat();
        // }
        // 
        // deleting
        // for(int i(0); i < arryNum ; i++)
        // {
            // delete animal[i];
        // }
        // 
    // }
    
    
    // testing shallow copy and deep copy 
    {
        Dog basic;
        std::cout << &basic << std::endl;
        {
            Dog temp = basic;
            std::cout << &temp << std::endl;
            
        }
        
    }
    

    return 0;
}
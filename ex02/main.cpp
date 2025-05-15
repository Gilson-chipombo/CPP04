/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:53:41 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/12 18:37:50 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        // const Animal* a; // Now Animal is an abstract method and cannot be initialized
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        j->makeSound();
        i->makeSound();

        std::cout << std::endl;
        
        delete j;
        delete i;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    
    {
        const int size = 4;
        Animal* animals[size];

        // Create 5 Dogs e 5 Cats
        for (int i = 0; i < size; ++i) {
            if (i < size / 2) animals[i] = new Dog();
            else animals[i] = new Cat();
        }

        for (int i = 0; i < size; ++i) {
            std::cout << animals[i]->getType() << "  ";
            animals[i]->makeSound();
        }

        std::cout << std::endl;
        std::cout << std::endl;
        
        for (int i = 0; i < size; ++i) delete animals[i];
    }
    return 0;
}

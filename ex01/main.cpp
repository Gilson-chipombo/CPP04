/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:53:41 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/15 13:02:04 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
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

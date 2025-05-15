/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:45 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/12 18:18:01 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete j;
        delete i;
        delete meta;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    {
        const WrongAnimal* a = new WrongAnimal();
        const WrongAnimal* b = new WrongCat();
        std::cout << b->getType() << " " << std::endl;
        b->makeSound();

        delete a;
        delete b;
    }
    return 0;
}
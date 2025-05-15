/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:58:28 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/13 15:51:43 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    brain = new Brain();
    std::cout  << "Cat Contructor called" << std::endl;
}
Cat::Cat(std::string _type){
    type = _type;
    std::cout  << "Cat Parametirezed Contructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat assignment operator called" << std::endl;
    if (this->brain)
        delete brain;
    brain = new Brain(*other.brain);
    return *this;

}

std::string Cat::getType() const{
    return (type);
}

void    Cat::makeSound() const{
    std::cout  << "Cat make miwau" << std::endl;
}

Cat::~Cat(){
    delete brain;
    std::cout  << "Cat destructor called" << std::endl;
}
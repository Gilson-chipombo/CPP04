/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:33 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/11 18:57:34 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
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
    type = other.type;
    return *this;
}

std::string Cat::getType() const{
    return (type);
}

void    Cat::makeSound() const{
    std::cout  << "Cat make miwau" << std::endl;
}

Cat::~Cat(){
    std::cout  << "Cat destructor called" << std::endl;
}
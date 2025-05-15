/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:39 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/13 15:50:21 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(std::string _type){
    type = _type;
    std::cout << "Dog Parametirezed contructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy construct called" << std::endl;
    *this = other;
}
Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called" << std::endl;
}

std::string Dog::getType() const
{
    return (type);
}

void    Dog::makeSound() const
{
    std::cout << "Dog make U U U U U" << std::endl;
}

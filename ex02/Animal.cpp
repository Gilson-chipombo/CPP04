/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:58:11 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/12 16:13:31 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "Unknown";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}



void    Animal::makeSound() const
{
    std::cout << "Animal make any sound" << std::endl;
}
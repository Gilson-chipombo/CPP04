/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:58:03 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/11 18:58:04 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout  << "WrongCat Contructor called" << std::endl;
}
WrongCat::WrongCat(std::string _type){
    type = _type;
    std::cout  << "WrongCat Parametirezed Contructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

std::string WrongCat::getType() const{
    return (type);
}

void    WrongCat::makeSound() const{
    std::cout  << "WrongCat make miwau" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout  << "WrongCat destructor called" << std::endl;
}
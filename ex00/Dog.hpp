/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:42 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/11 18:57:43 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog: public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        std::string getType() const;
        void    makeSound() const;
};
#endif
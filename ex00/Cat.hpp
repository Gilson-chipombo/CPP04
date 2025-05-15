/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:36 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/11 18:57:37 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        std::string getType() const;
        void    makeSound() const;
};
#endif
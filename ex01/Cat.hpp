/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:57:36 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/11 19:38:37 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;
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
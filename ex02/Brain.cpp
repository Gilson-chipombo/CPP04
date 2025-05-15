/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:58:20 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/12 16:13:39 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
    std::cout << "Brain copy Constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assigment operator called" << std::endl;
    for (int i = 0; i < 100; i++) ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
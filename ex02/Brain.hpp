/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:58:22 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/05/12 16:13:44 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain& other);
    ~Brain();
};

#endif

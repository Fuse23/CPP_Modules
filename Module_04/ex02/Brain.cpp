/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:39:14 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 21:43:52 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain( const Brain &brain ) {
    *this = brain;
    std::cout << "Brain copy constructor" << std::endl;
}

Brain   &Brain::operator=( const Brain &brain ) {

    std::cout << "Brain assigment operator" << std::endl;

    for (int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];

    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

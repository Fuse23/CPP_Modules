/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:34:17 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 20:50:30 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &animal ) : _type( animal._type ) {
    std::cout << "Animal copy constructor" << std::endl;
}

Animal  &Animal::operator=( const Animal &animal ) {

    std::cout << "Animal assigment operator" << std::endl;

    if (this != &animal)
        _type = animal._type;

    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void    Animal::makeSound( void ) const {
    std::cout << "Animal make sound ..." << std::endl;
}

std::string Animal::getType( void ) const {
    return _type;
}

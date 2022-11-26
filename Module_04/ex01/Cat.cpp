/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:44:06 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 22:01:55 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    std::cout << "Cat default constructor" << std::endl;

    _type = "type cat";
    _brain = new Brain();
}

Cat::Cat( const Cat &cat ) {

    std::cout << "Cat copy constructor" << std::endl;

    _type = cat._type;
    _brain = new Brain(*cat._brain);
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    if (_brain != nullptr)
        delete _brain;
}

Cat &Cat::operator=( const Cat &cat ) {

    std::cout << "Cat assigment operator" << std::endl;

    if (this != &cat) {
        if (_brain != nullptr)
            delete _brain;

        _brain = new Brain(*cat._brain);
        _type = cat._type;
    }

    return *this;
}

void    Cat::makeSound( void ) const {
    std::cout << "Miaw" << std::endl;
}

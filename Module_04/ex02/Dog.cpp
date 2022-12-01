/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:44:06 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 22:16:48 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

    std::cout << "Dog default constructor" << std::endl;

    _type = "type dog";
    _brain = new Brain();
}

Dog::Dog( const Dog &dog ) {

    std::cout << "Dog copy constructor" << std::endl;

    _type = dog._type;
    _brain = new Brain(*dog._brain);
}

Dog::~Dog() {

    std::cout << "Dog destructor" << std::endl;

    if (_brain != nullptr)
        delete _brain;
}

Dog &Dog::operator=( const Dog &dog ) {

    std::cout << "Dog assigment operator" << std::endl;

    if (this != &dog) {
        if (_brain != nullptr)
            delete _brain;

        _type = dog._type;
        _brain = new Brain(*dog._brain);
    }

    return *this;
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof" << std::endl;
}

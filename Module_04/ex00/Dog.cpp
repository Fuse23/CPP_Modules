/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:44:06 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 21:57:00 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor" << std::endl;
    _type = "type dog";
}

Dog::Dog( const Dog &dog ) {
    std::cout << "Dog copy constructor" << std::endl;
    _type = dog._type;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=( const Dog &dog ) {

    std::cout << "Dog assigment operator" << std::endl;

    if (this != &dog)
        _type = dog._type;

    return *this;
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof" << std::endl;
}

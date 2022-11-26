/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:34:17 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 20:50:30 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wrongAnimal ) : _type( wrongAnimal._type ) {
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=( const WrongAnimal &wrongAnimal ) {

    std::cout << "WrongAnimal assigment operator" << std::endl;

    if (this != &wrongAnimal)
        _type = wrongAnimal._type;

    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal make sound ..." << std::endl;
}

std::string WrongAnimal::getType( void ) const {
    return _type;
}

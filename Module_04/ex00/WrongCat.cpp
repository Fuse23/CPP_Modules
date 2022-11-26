/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:44:06 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 21:06:06 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor" << std::endl;
    _type = "type wrong cat";
}

WrongCat::WrongCat( const WrongCat &WrongCat ) {
    std::cout << "WrongCat copy constructor" << std::endl;
    _type = WrongCat._type;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &WrongCat ) {

    std::cout << "WrongCat assigment operator" << std::endl;

    if (this != &WrongCat)
        _type = WrongCat._type;

    return *this;
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Wrong Miaw" << std::endl;
}

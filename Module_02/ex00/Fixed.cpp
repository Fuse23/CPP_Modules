/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:50 by falarm            #+#    #+#             */
/*   Updated: 2022/11/18 23:06:28 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ) : _value(fixed._value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &fixed ) {

    std::cout << "Copy assignment operator called" << std::endl;

    if (this == &fixed)
        return *this;

    _value = fixed.getRawBits();

    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits( int const value ) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = value;
}

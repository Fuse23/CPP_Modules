/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:50 by falarm            #+#    #+#             */
/*   Updated: 2022/11/19 21:41:20 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ) : _value( fixed._value ) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : _value( value << _bit ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _value( (int)roundf( value * (1 << _bit) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &fixed ) {

    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &fixed)
        _value = fixed.getRawBits();

    return *this;
}

std::ostream &operator<<( std::ostream &out, const Fixed &fixed ) {
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits( int const value ) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = value;
}

int Fixed::toInt( void ) const {
    return _value >> _bit;
}

float Fixed::toFloat( void ) const {
    return (float)_value / (1 << _bit);
}

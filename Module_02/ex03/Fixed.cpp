/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:50 by falarm            #+#    #+#             */
/*   Updated: 2022/11/22 22:02:53 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ) : _value( fixed._value ) {
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : _value( value << _bit ) {
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _value( (int)roundf( value * (1 << _bit) ) ) {
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
    // std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=( const Fixed &fixed ) {

    // std::cout << "Copy assignment operator called" << std::endl;

    if (this != &fixed)
        _value = fixed.getRawBits();

    return *this;
}

bool    Fixed::operator>( Fixed const &fixed ) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool    Fixed::operator<( Fixed const &fixed ) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool    Fixed::operator<=( Fixed const &fixed ) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool    Fixed::operator>=( Fixed const &fixed ) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool    Fixed::operator==( Fixed const &fixed ) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool    Fixed::operator!=( Fixed const &fixed ) const {
    return this->getRawBits() != fixed.getRawBits();
}

Fixed   Fixed::operator+( Fixed const &fixed ) const {
    return Fixed( this->toFloat() + fixed.toFloat() );
}

Fixed   Fixed::operator-( Fixed const &fixed ) const {
    return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed   Fixed::operator*( Fixed const &fixed ) const {
    return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed   Fixed::operator/( Fixed const &fixed ) const {
    return Fixed( this->toFloat() / fixed.toFloat() );
}

Fixed   Fixed::operator++( int ) {

    Fixed   tmp( *this );

    ++(*this);
    return *this;
}

Fixed   Fixed::operator--( int ) {

    Fixed   tmp( *this );

    --(*this);
    return *this;
}

Fixed   &Fixed::operator++( void ) {
    this->_value++;
    return *this;
}

Fixed   &Fixed::operator--( void ) {
    this->_value--;
    return *this;
}

std::ostream    &operator<<( std::ostream &out, const Fixed &fixed ) {
    out << fixed.toFloat();
    return out;
}

Fixed   &Fixed::min( Fixed &a, Fixed &b ) {
    return ( a < b ) ? a : b;
}

Fixed   &Fixed::max( Fixed &a, Fixed &b ) {
    return ( a < b ) ? b : a;
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b ) {
    return ( a.getRawBits() < b.getRawBits() ) ? a : b;
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b ) {
    return ( a.getRawBits() < b.getRawBits() ) ? b : a;
}

int Fixed::getRawBits( void ) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits( int const value ) {
    // std::cout << "setRawBits member function called" << std::endl;
    _value = value;
}

int Fixed::toInt( void ) const {
    return _value >> _bit;
}

float   Fixed::toFloat( void ) const {
    return (float)_value / (1 << _bit);
}

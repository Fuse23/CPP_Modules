/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:06:15 by falarm            #+#    #+#             */
/*   Updated: 2022/11/20 22:30:43 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
    std::cout << "Constructor point called" << std::endl;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
    std::cout << "Constructor point called" << std::endl;
}

Point::Point( const Point &point ) : _x(point.getX()), _y(point.getY()) {
    std::cout << "Constructor point called" << std::endl;
}

Point::~Point() {
    std::cout << "Destructor point called" << std::endl;
}

Fixed   Point::getX( void ) const {
    std::cout << "getX member function called" << std::endl;
    return _x;
}

Fixed   Point::getY( void ) const {
    std::cout << "getY member function called" << std::endl;
    return _y;
}

Point   &Point::operator=( const Point &point ) {

    std::cout << "Copy constructor point called" << std::endl;

    if (this != point) {
        const_cast<Fixed &>(this->_x) = point.getX();
        const_cast<Fixed &>(this->_y) = point.getY();
    }

    return *this;
}

std::ostream    &operator<<( std::ostream &out, const Point &point ) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}

bool    Point::operator==( const Point &point ) {
    return (Fixed)_x == point._x && (Fixed)_y == point._y;
}

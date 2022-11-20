/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:06:33 by falarm            #+#    #+#             */
/*   Updated: 2022/11/20 22:23:19 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

#include <iostream>
#include "Fixed.hpp"

class Point {

private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();
    Point( const float x, const float y );
    Point( const Point &point );

    ~Point();

    Fixed   getX( void ) const;
    Fixed   getY( void ) const;

    Point   &operator=( const Point &point );


    bool    operator==( const Point &point );
};

std::ostream    &operator<<( std::ostream &out, const Point &point );

bool    bsp( Point const a, Point const b, Point const c, Point const point );

#endif // __POINT_HPP__

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:24:13 by falarm            #+#    #+#             */
/*   Updated: 2022/11/19 21:47:44 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {

private:
    int                 _value;
    static const int    _bit = 8;

public:
    Fixed( void );
    Fixed( const int value );
    Fixed( const float value );
    Fixed( const Fixed &fixed );

    ~Fixed( void );

    Fixed &operator=( const Fixed &fixed );

    int     getRawBits( void ) const;
    void    setRawBits( int const value );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, const Fixed &fixed );

#endif // __FIXED_HPP__

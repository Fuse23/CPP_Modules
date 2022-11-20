/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:24:13 by falarm            #+#    #+#             */
/*   Updated: 2022/11/20 21:55:38 by falarm           ###   ########.fr       */
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

    Fixed   &operator=( const Fixed &fixed );

    bool    operator>( Fixed const &fixed ) const;
    bool    operator<( Fixed const &fixed ) const;
    bool    operator<=( Fixed const &fixed ) const;
    bool    operator>=( Fixed const &fixed ) const;
    bool    operator==( Fixed const &fixed ) const;
    bool    operator!=( Fixed const &fixed ) const;

    Fixed   operator+( Fixed const &fixed ) const;
    Fixed   operator-( Fixed const &fixed ) const;
    Fixed   operator*( Fixed const &fixed ) const;
    Fixed   operator/( Fixed const &fixed ) const;
    
    Fixed   operator++( int );
    Fixed   &operator++( void );
    Fixed   operator--( int );
    Fixed   &operator--( void );

    static Fixed    &min( Fixed &a, Fixed &b );
    static Fixed    &max( Fixed &a, Fixed &b );
    static const Fixed  &min( const Fixed &a, const Fixed &b );
    static const Fixed  &max( const Fixed &a, const Fixed &b );

    int     getRawBits( void ) const;
    void    setRawBits( int const value );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream    &operator<<( std::ostream &out, const Fixed &fixed );

#endif // __FIXED_HPP__

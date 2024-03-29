/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:24:13 by falarm            #+#    #+#             */
/*   Updated: 2022/11/19 21:47:39 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed {

private:
    int                 _value;
    static const int    _bit = 8;

public:
    Fixed( void );
    Fixed( const Fixed &fixed );
    ~Fixed( void );
    Fixed &operator=( const Fixed &fixed );
    int getRawBits( void ) const;
    void    setRawBits( int const value );
};

#endif // __FIXED_HPP__

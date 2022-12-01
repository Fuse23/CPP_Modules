/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:24:38 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 22:27:00 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal {

protected:
    std::string _type;

public:
    Animal();
    Animal( const Animal &animal );

    virtual ~Animal();

    Animal  &operator=( const Animal &animal );

    virtual void    makeSound( void ) const = 0;
    std::string     getType( void ) const;
};

#endif // __ANIMAL_HPP__

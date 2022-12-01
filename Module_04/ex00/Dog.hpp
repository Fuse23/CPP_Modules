/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:40:20 by falarm            #+#    #+#             */
/*   Updated: 2022/11/30 23:11:25 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog( const Dog &dog );

    ~Dog();

    Dog &operator=( const Dog &dog );

    virtual void    makeSound( void ) const;
};

#endif // __DOG_HPP__

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:40:20 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 20:42:23 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    Cat( const Cat &cat );

    ~Cat();

    Cat &operator=( const Cat &cat );

    void    makeSound( void ) const;
};

#endif // __CAT_HPP__

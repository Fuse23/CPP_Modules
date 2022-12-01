/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:40:20 by falarm            #+#    #+#             */
/*   Updated: 2022/11/30 22:34:02 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
    Brain   *_brain;

public:
    Cat();
    Cat( const Cat &cat );

    ~Cat();

    Cat &operator=( const Cat &cat );

    virtual void    makeSound( void ) const;
};

#endif // __CAT_HPP__

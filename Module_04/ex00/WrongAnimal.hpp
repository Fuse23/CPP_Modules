/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:53:08 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 21:22:59 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal {

protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal( const WrongAnimal &wrongAnimal );

    virtual ~WrongAnimal();

    WrongAnimal &operator=( const WrongAnimal &wrongAnimal );

    void    makeSound( void ) const;
    std::string getType( void ) const;
};

#endif // __WRONGANIMAL_HPP__

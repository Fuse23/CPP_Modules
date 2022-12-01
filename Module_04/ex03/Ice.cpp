/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:55:18 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:19:42 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria( "ice" ) {}

Ice::~Ice() {}

Ice::Ice( const Ice & ice ) : AMateria( ice.getType() ) {}

Ice &Ice::operator=( const Ice & ice ) {

    if (this != &ice)
        this->_type = ice.getType();

    return *this;
}

AMateria*   Ice::clone( void ) const {
    return new Ice();
}

void    Ice::use( ICharacter & target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:10:17 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 20:42:02 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria( "cure" ) {}

Cure::Cure( const Cure & cure ) : AMateria( cure.getType() ) {}

Cure    &Cure::operator=( const Cure & cure ) {

    if (this != &cure)
        this->_type = cure.getType();

    return *this;
}

Cure::~Cure() {}

AMateria*   Cure::clone( void ) const {
    return new Cure();
}

void    Cure::use( ICharacter & target ) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

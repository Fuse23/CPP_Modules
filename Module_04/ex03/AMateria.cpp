/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:43:54 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 22:50:39 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( std::string const &type ) : _type( type ) {}

AMateria::AMateria( const AMateria &aMateria ) : _type( aMateria._type ) {}

AMateria::~AMateria() {}

AMateria    &AMateria::operator=( const AMateria &aMateria ) {

    if (this != &aMateria)
        _type = aMateria._type;

    return *this;
}

std::string const   &AMateria::getType( void ) const {
    return _type;
}

void    AMateria::use( ICharacter &target ) {
    std::cout << target.getName() << std::endl;
}

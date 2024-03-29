/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:04:56 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 20:42:49 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main( void ) {

    IMateriaSource* src = new MateriaSource();
    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );

    ICharacter *me = new Character( "me" );

    AMateria *tmp;
    tmp = src->createMateria( "ice" );
    me->equip( tmp );
    tmp = src->createMateria( "cure" );
    me->equip( tmp );

    ICharacter* bob = new Character( "bob" );

    me->use( 0, *bob );
    me->use( 1, *bob );

    delete bob;
    delete me;
    delete src;

    return 0;
}

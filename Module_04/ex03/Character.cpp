/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:30:49 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:54:13 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character( std::string name ) : _name( name ) {}

Character::Character( const Character & character ) {

    this->_name = character.getName();

    for (int i = 0; i < 4; i++)
        this->_inventory[i] = character._inventory[i]->clone();
}

Character   &Character::operator=( const Character & character ) {

    if (this != &character) {
        this->_name = character.getName();

        for (int i = 0; i < 4; i++)
            this->_inventory[i] = character._inventory[i]->clone();
    }

    return *this;
}

Character::~Character() {

    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] != nullptr)
            delete this->_inventory[i];
}

std::string const   &Character::getName( void ) const {
    return this->_name;
}

void    Character::equip( AMateria* materia ) {

    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = materia;
            return;
        }
    }

    std::cout << "Inventiry is full!!!" << std::endl;
}

void    Character::unequip( int idx ) {

    if (idx < 0 || idx > 3) {
        std::cout << "Out of reange!!!" << std::endl;
        return;
    }

    this->_inventory[idx] = nullptr;
}

void    Character::use( int idx, ICharacter & target ) {

    if (idx < 0 || idx > 3) {
        std::cout << "Out of reange!!!" << std::endl;
        return;
    } else if (!this->_inventory[idx]) {
        std::cout << "There is no materia in inventory!!!" << std::endl;
        return;
    }

    this->_inventory[idx]->use( target );
}

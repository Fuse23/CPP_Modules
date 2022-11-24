/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:00:07 by falarm            #+#    #+#             */
/*   Updated: 2022/11/24 22:06:16 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _health( 10 ), _energy( 10 ), _attack( 0 ) {
    std::cout << name << ": Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << _name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clapTrap ) : 
            _name( clapTrap._name ), _health( clapTrap._health ),
            _energy( clapTrap._energy ), _attack( clapTrap._attack ) {

                std::cout << "Copy constructor called" << std::endl;
}

ClapTrap    &ClapTrap::operator=( const ClapTrap &clapTrap ) {

    std::cout << "Assigment operator called" << std::endl;

    if (this != &clapTrap) {
        _name = clapTrap._name;
        _health = clapTrap._health;
        _energy = clapTrap._energy;
        _attack = clapTrap._attack;
    }

    return *this;
}

void    ClapTrap::attack( const std::string &target ) {

    if (_health == 0)
        std::cout << "CalpTrap " << _name << " can't attack, because it's dead!" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " can't attack, because it hasn't energy!" << std::endl;
    else {
        _energy--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack
                << " point of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount ) {

    if (_health == 0) {
        std::cout << "ClapTrap " << _name << " can't take damage, because it's dead!" << std::endl;
        return;
    }

    _health = (amount > _health) ? 0 : _health - amount;

    std::cout << "ClapTrap " << _name << " take " << amount << " damage! Now it has "
            << _health << " hit point" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {

    if (_health == 0)
        std::cout << "ClapTrap " << _name << " can't be repaired, because it's dead!" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " can't be repaired, because it hasn't energy!" << std::endl;
    else {
        _health += amount;
        std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points! Now it has "
                << _health << " hit points" << std::endl;
    }
}

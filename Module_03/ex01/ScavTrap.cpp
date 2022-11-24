/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:54:10 by falarm            #+#    #+#             */
/*   Updated: 2022/11/24 22:12:04 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {

    _health = 100;
    _energy = 50;
    _attack = 20;

    std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << "constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavTrap ) : ClapTrap( scavTrap._name ) {

    _health = scavTrap._health;
    _energy = scavTrap._energy;
    _attack = scavTrap._attack;

    std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << "copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << "destructor called" << std::endl;
}

ScavTrap    &ScavTrap::operator=( const ScavTrap &scavTrap ) {

    if (this != &scavTrap) {
        _name = scavTrap._name;
        _health = scavTrap._health;
        _energy = scavTrap._energy;
        _attack = scavTrap._attack;
    }

    std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << "assigment operator called" << std::endl;

    return *this;
}

void    ScavTrap::attack( const std::string &target ) {

    if (_health == 0)
        std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << " can't attack, because it's dead!" << std::endl;
    else if (_energy == 0)
        std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << " can't attack, because it hasn't energy!" << std::endl;
    else {
        _energy--;
        std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << " attacks " << target << ", causing " << _attack
                << " point of damage!" << std::endl;
    }
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << ((_name.length() > 0) ? _name + " " : "") << "is now in Gate keeper mode." << std::endl;
}

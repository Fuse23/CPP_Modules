/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:49:32 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 17:08:22 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name ) {

    ClapTrap::_name = name + "_clap_name";
    _health = 100;
    _energy = 50;
    _attack = 30;

    std::cout << "DiamondTrap " << ((_name.length() > 0) ? _name + " " : "") << "constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondTrap ) {

    ClapTrap::_name = diamondTrap._name + "_clap_name";
    _health = diamondTrap._health;
    _energy = diamondTrap._energy;
    _attack = diamondTrap._attack;

    std::cout << "DiamondTrap " << ((_name.length() > 0) ? _name + " " : "") << "copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &diamondTrap ) {

    if (this != &diamondTrap) {
        ClapTrap::_name = diamondTrap._name + "_clap_name";
        _health = diamondTrap._health;
        _energy = diamondTrap._energy;
        _attack = diamondTrap._attack;
    }

    std::cout << "DiamondTrap " << ((_name.length() > 0) ? _name + " " : "") << "assigment operator called" << std::endl;

    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << ((_name.length() > 0) ? _name + " " : "") << "destuctor called" << std::endl;
}

void    DiamondTrap::attack( const std::string &target ) {
    ScavTrap::attack( target );
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am " << ((_name.length() > 0) ? _name + " " : "") << std::endl;
}

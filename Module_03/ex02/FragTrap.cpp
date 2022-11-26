/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:31:44 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 16:41:47 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {

    _health = 100;
    _energy = 100;
    _attack = 30;

    std::cout << "FragTrap " << ((_name.length() > 0) ? _name + " " : "") << "constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &fragTrap ) : ClapTrap( fragTrap._name ) {

    _health = fragTrap._health;
    _energy = fragTrap._energy;
    _attack = fragTrap._attack;

    std::cout << "FragTrap " << ((_name.length() > 0) ? _name + " " : "") << "copy constructor called" << std::endl;
}

FragTrap    &FragTrap::operator=( const FragTrap &fragTrap ) {

    if (this != &fragTrap) {
        _health = fragTrap._health;
        _energy = fragTrap._energy;
        _attack = fragTrap._attack;
    }

    std::cout << "FragTrap " << ((_name.length() > 0) ? _name + " " : "") << "assigment operator called" << std::endl;

    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << ((_name.length() > 0) ? _name + " " : "") << "destructor called" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << ((_name.length() > 0) ? _name + " " : "") << "high-five!!!" << std::endl;
}

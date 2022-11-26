/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:22:12 by falarm            #+#    #+#             */
/*   Updated: 2022/11/24 21:49:04 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {

protected:
    std::string _name;
    int         _health;
    int         _energy;
    int         _attack;

    ClapTrap();

public:
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap &clapTrap );

    ~ClapTrap();

    ClapTrap    &operator=( const ClapTrap &clapTrap );

    void    attack( const std::string &target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
};

#endif // __CLAPTRAP_HPP__

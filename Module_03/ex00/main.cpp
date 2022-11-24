/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:19:48 by falarm            #+#    #+#             */
/*   Updated: 2022/11/24 21:18:46 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap    clapTrap1( "lol" );
    ClapTrap    clapTrap2( "kek" );

    // ClapTrap    clapTrap3( clapTrap2 );
    // ClapTrap    clapTrap4 = clapTrap1;

    clapTrap1.attack( "kek" );
    clapTrap2.takeDamage( 6 );
    clapTrap2.beRepaired( 7 );
    clapTrap2.attack( "lol" );
    clapTrap1.takeDamage( 12 );
    clapTrap1.beRepaired( 4 );
    clapTrap1.attack( "kek" );

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:30:09 by falarm            #+#    #+#             */
/*   Updated: 2022/11/18 21:31:54 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void    Harl::debug( void ) {
    std::cout << "DEBUG function called!" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "INFO function called!" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "WARNING function called!" << std::endl;
}

void    Harl::error( void ) {
    std::cout << "ERROR function called!" << std::endl;
}

void    Harl::complain( std::string level ) {

    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string args[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++) {
        if (args[i] == level) {
            (this->*functions[i])();
            return;
        }
    }

    std::cout << "Error! There is no " << level << " function" << std::endl;
}

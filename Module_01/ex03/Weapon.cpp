/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:53 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:54 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) {
    _type = type;
}

Weapon::~Weapon() {

}

std::string const &Weapon::getType() const {
    return _type;
}

void    Weapon::setType(std::string const &type) {
    _type = type;
}

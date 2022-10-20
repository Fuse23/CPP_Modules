/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:40 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:41 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) {
    _name = name;
    _weapon = nullptr;
}

HumanB::~HumanB() {

}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
}

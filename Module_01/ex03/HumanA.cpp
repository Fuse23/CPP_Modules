/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:32 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:33 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon) {
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA() {

}

void    HumanA::attack() {
    std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
}

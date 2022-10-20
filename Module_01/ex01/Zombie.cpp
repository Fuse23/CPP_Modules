/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:50:12 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:18 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    _name = "NoName";
}

Zombie::Zombie(std::string name) {
    _name = name;
}

Zombie::~Zombie() {
    std::cout << _name << " was destroyed!" << std::endl;
}

void    Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    _name = name;
}

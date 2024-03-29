/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:49:23 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:49:27 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie  zombieNoName;
    zombieNoName.announce();

    Zombie  zombieName("Dasha");
    zombieName.announce();

    Zombie  *zombieAllocate;
    zombieAllocate = newZombie("Vitaly");
    zombieAllocate->announce();
    delete zombieAllocate;

    randomChump("Oleg");
}

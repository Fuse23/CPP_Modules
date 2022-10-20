/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:50:06 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:50:07 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie  zombieNoName;
    zombieNoName.announce();

    Zombie  zombieName("Dasha");
    zombieName.announce();

    Zombie *hordeZombie = zombieHorde(5, "LOHI");

    for (int i = 0; i < 5; i++) {
        hordeZombie[i].announce();
    }

    Zombie  zombieTest("test");
    zombieTest.announce();

    for (int i = 0; i < 5; i++) {
        hordeZombie[i].announce();
    }

    delete [] hordeZombie;
}

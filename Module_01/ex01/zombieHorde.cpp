/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:50:18 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:50:24 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie  *hored = new Zombie[N];

    for (int i = 0; i < N; i++) {
        hored[i].setName(name);
    }

    return hored;
}

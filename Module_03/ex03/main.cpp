/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:19:48 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 17:26:59 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap one( "Biba" );
	std::cout << std::endl;

	DiamondTrap two( "Boba" );
	std::cout << std::endl;

	DiamondTrap three( two );
	std::cout << std::endl;

	two.whoAmI();
	two.attack( "bum!" );
	two.highFivesGuys();
	two.takeDamage( 5 );
	one.attack( "bom!" );
	one.guardGate();
	std::cout << std::endl;

	return (0);
}
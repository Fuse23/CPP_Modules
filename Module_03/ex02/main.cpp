/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:19:48 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 16:40:24 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap one("Biba");
	std::cout << std::endl;
	FragTrap two("Boba");
	std::cout << std::endl;

	two.highFivesGuys();
	two.attack("Biba");
	two.takeDamage(5);
	one.attack("Boba");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}
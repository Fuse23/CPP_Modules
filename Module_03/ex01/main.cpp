/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:19:48 by falarm            #+#    #+#             */
/*   Updated: 2022/11/24 22:16:46 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap one("Biba");
	std::cout << std::endl;

	ScavTrap two("Boba");
	std::cout << std::endl;

	two.attack("Boba");
	one.guardGate();
	std::cout << std::endl;

	ScavTrap three(one);
	std::cout << std::endl;

	ClapTrap a("");
	ClapTrap b = a;
	std::cout << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:44:47 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 16:49:24 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap &diamondTrap );

    ~DiamondTrap();

    DiamondTrap &operator=( const DiamondTrap &diamondTrap );

    void    attack( const std::string &target );
    void    whoAmI( void );
};

#endif // __DIAMONDTRAP_HPP__

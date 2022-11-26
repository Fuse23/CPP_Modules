/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:21:14 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 17:30:08 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

public:
    ScavTrap();
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &scavTrap );

    ~ScavTrap();

    ScavTrap    &operator=( const ScavTrap &scavTrap );

    void    attack( const std::string &target );
    void    guardGate( void );
};

#endif // __SCAVTRAP_HPP__

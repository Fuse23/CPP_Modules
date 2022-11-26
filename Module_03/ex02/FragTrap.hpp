/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:23:34 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 16:41:49 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap( const FragTrap &fragTrap );

    ~FragTrap();

    FragTrap    &operator=( const FragTrap &fragTrap );

    void    highFivesGuys( void );
};

#endif // __FRAGTRAP_HPP__

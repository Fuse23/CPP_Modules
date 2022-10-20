/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:55 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:59 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string const &type);
    ~Weapon();
    std::string const &getType() const;
    void    setType(std::string const &type);
};

#endif

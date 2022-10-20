/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:43 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:44 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(std::string const &name);
    ~HumanB();
    void    setWeapon(Weapon &weapon);
    void    attack();
};

#endif

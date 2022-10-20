/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:37 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:52:38 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanA(std::string const &name, Weapon &weapon);
    ~HumanA();
    void    attack();
};

#endif

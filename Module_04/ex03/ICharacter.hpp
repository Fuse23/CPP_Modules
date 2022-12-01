/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:34:06 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:16:59 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

#include "AMateria.hpp"

class ICharacter {

public:
    virtual ~ICharacter() {}

    virtual std::string const   &getName( void ) const = 0;
    virtual void                equip( AMateria* materia ) = 0;
    virtual void                unequip( int idx ) = 0;
    virtual void                use( int idx, ICharacter & target ) = 0;
};

#endif // __ICHARACTER_HPP__

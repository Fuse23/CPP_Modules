/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:51:08 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:39:48 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

private:
    std::string _name;
    AMateria    *_inventory[4];

public:
    Character();
    Character( std::string name );
    Character( const Character & character );

    Character   &operator=( const Character & character );

    ~Character();

    virtual std::string const   &getName( void ) const;
    virtual void                equip( AMateria* materia );
    virtual void                unequip( int idx );
    virtual void                use( int idx, ICharacter & target );
};

#endif // __CHARACTER_HPP__

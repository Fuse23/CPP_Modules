/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:47:39 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 18:54:36 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice( const Ice & ice );

    Ice &operator=( const Ice & ice );

    ~Ice();

    virtual AMateria*   clone( void ) const;
    virtual void        use( ICharacter & target );
};

#endif // __ICE_HPP__

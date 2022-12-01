/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:07:38 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:18:36 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria {

public:
    Cure();
    Cure( const Cure & cure );

    Cure    &operator=( const Cure & cure );

    ~Cure();

    virtual AMateria*   clone( void ) const;
    virtual void        use( ICharacter& target );
};

#endif // __CURE_HPP__

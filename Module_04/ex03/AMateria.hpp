/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:35:34 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:15:17 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

#include <iostream>
#include <string>

class ICharacter;

class AMateria {

protected:
    std::string _type;

public:
    AMateria( std::string const & type );
    AMateria( const AMateria & aMateria );

    virtual ~AMateria();

    AMateria    &operator=( const AMateria &aMateria );

    std::string const & getType( void ) const;
    virtual AMateria*   clone( void ) const = 0;
    virtual void        use( ICharacter & target );
};

#endif // __AMATERIA_HPP__

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:26:52 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:38:19 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
    AMateria    *_source[4];

public:
    MateriaSource();
    MateriaSource( const MateriaSource & materiaSource );

    MateriaSource   &operator=( const MateriaSource & materiaSource );

    ~MateriaSource();

    virtual void        learnMateria( AMateria* );
    virtual AMateria*   createMateria( std::string const & type );
};

#endif // __MATERIASOURCE_HPP__

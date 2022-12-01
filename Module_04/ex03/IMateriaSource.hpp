/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:20:14 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 19:23:14 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource {

public:
    virtual ~IMateriaSource() {}

    virtual void        learnMateria( AMateria* ) = 0;
    virtual AMateria*   createMateria( std::string const & type ) = 0;
};

#endif // __IMATERIASOURCE_HPP__

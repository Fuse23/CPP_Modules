/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:56:52 by falarm            #+#    #+#             */
/*   Updated: 2022/12/01 20:41:13 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

    for (int i = 0; i < 4; i++)
        this->_source[i] = nullptr;
}

MateriaSource::MateriaSource( const MateriaSource & materiaSource ) {

    for (int i = 0; i < 4; i++)
        this->_source[i] = materiaSource._source[i];
}

MateriaSource   &MateriaSource::operator=( const MateriaSource & materiaSource ) {

    if (this != &materiaSource) {
        for (int i = 0; i < 4; i++)
            this->_source[i] = materiaSource._source[i];
    }

    return *this;
}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < 4; i++)
        if (this->_source[i])
            delete this->_source[i];
}

void    MateriaSource::learnMateria( AMateria* materia ) {

    for (int i = 0; i < 4; i++) {
        if (!this->_source[i]) {
            this->_source[i] = materia;
            return;
        }
    }

    std::cout << "Source is full!!!" << std::endl;
}

AMateria*   MateriaSource::createMateria( std::string const & type ) {

    for (int i = 0; i < 4; i++) {
        if (this->_source[i] && this->_source[i]->getType() == type)
            return this->_source[i]->clone();
    }

    return nullptr;
}

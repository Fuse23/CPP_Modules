/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:40:20 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 20:42:23 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat( const WrongCat &WrongCat );

    ~WrongCat();

    WrongCat &operator=( const WrongCat &WrongCat );

    void    makeSound( void ) const;
};

#endif // __WRONGCAT_HPP__

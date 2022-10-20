/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:49:46 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:51:01 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{

private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void    announce( void );

};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif

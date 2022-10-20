/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:50:14 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:51:52 by falarm           ###   ########.fr       */
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
    void    setName(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif

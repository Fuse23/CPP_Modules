/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:53:40 by falarm            #+#    #+#             */
/*   Updated: 2022/11/18 21:14:14 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

public:
    void    complain( std::string level );
    Harl( void );
    ~Harl( void );
};

#endif

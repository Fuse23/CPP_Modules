/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:33:59 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 21:42:16 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain {

private:
    std::string _ideas[100];

public:
    Brain();
    Brain( const Brain &brain );

    ~Brain();

    Brain   &operator=( const Brain &brain );
};

#endif // __BRAIN_HPP__

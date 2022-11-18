/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:41:18 by falarm            #+#    #+#             */
/*   Updated: 2022/11/18 20:43:12 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    Harl harl;

    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("WARNING");

    return 0;
}

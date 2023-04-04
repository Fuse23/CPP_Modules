/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:23:25 by falarm            #+#    #+#             */
/*   Updated: 2023/04/04 22:11:33 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(const int argc, const char *argv[]) {
    try {
        if (argc != 2) {
            throw std::string("Error: could not open file.");
            return 1;
        }

        BitcoinExchange btc;
        btc.parsing(argv[1], '|');
    } catch (std::string error) {
        std::cerr << error << std::endl;
    }

    return 0;
}

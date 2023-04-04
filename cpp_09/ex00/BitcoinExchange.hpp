/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:23:11 by falarm            #+#    #+#             */
/*   Updated: 2023/04/04 22:13:13 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# include <map>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <ctime>
# include <iomanip>

const float MAX = 1000.0;
const float MIN = 0;
const std::string databaseFile = "data.csv";

class BitcoinExchange {
private:
    std::map<std::string, float> _dict;

public:
    BitcoinExchange();
    BitcoinExchange(std::string const &filePath);
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &copy);
    BitcoinExchange &operator=(BitcoinExchange const &copy);

    std::map<std::string, float> const &getDict() const;

    void parsing(std::string const &fileName, const char delimiter);
    void outputResults(std::string const &key, const float btcValue);
};

#endif // __BITCOINEXCHANGE_HPP__

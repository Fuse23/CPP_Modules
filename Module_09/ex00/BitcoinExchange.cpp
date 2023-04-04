#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    parsing(databaseFile, ',');

    if (!this->_dict.size())
        throw std::string("Error: empty file.");
}

BitcoinExchange::BitcoinExchange(std::string const &filePath) {
    parsing(filePath, ',');

    if (!this->_dict.size())
        throw std::string("Error: empty file.");
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) : _dict(copy._dict) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy) {
    if (this == &copy)
        return *this;

    this->_dict = copy._dict;
    return *this;
}

std::map<std::string, float> const &BitcoinExchange::getDict() const { return this->_dict; }

bool isValidDate(std::string const &date) {
    std::tm timeinfo = {};

    std::istringstream ss(date);
    ss >> std::get_time(&timeinfo, "%Y-%m-%d");

    if (ss.fail()) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;
    }

    return true;
}

float isValidValue(const float value, const char flag) {
    if (value > MAX && flag == '|') {
        std::cerr << "Error: too large a number." << std::endl;
        return -1;
    } else if (value < MIN) {
        std::cerr << "Error: not a positive number." << std::endl;
        return -1;
    } else {
        return value;
    }
}

void BitcoinExchange::outputResults(std::string const &key, const float btcValue) {
    std::map<std::string, float>::iterator it = this->_dict.lower_bound(key);

    if (it != this->_dict.begin())
        it--;

    std::cout << it->first << " => " << btcValue << " = " << btcValue * it->second << std::endl;
}

void BitcoinExchange::parsing(std::string const &fileNmae, const char delimiter) {
    std::ifstream in(fileNmae);

    if (!in)
        throw std::string("Error: could not open file.");

    std::string line;
    int count = 0;

    std::getline(in, line);

    while (std::getline(in, line)) {
        count++;

        std::istringstream ss(line);
        std::string date, value;
        float btcValue;

        if (std::getline(ss, date, delimiter) && std::getline(ss, value)) {
            btcValue = std::stof(value);

            if (!isValidDate(date) || isValidValue(btcValue, delimiter) < 0)
                continue;
        } else
            std::cerr << "Error: bad input => " << line << std::endl;

        if (delimiter == ',')
            this->_dict.insert(std::pair<std::string, float>(date, btcValue));
        else {
            if (isValidValue(btcValue, delimiter) < 0)
                continue;
            outputResults(date, btcValue);
        }
    }

    in.close();

    if (!count)
        throw std::string("Error: empty file.");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:53:07 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:57:00 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

std::string replaceString(std::string str, std::string search, std::string replace) {

    std::string result;

    while (str.find(search) != std::string::npos) {
        result += str.substr(0, str.find(search));
        str = str.substr(str.find(search) + search.length(), str.length());
        result += replace;
    }

    return result + str;
}

std::string createRaplaceName(std::string file_name) {

    if (file_name.find_last_of('.'))
        return file_name + ".replace";
    
    return file_name + "replace";
}

int main(int argc, char* argv[]) {

    if (argc != 4) {
        std::cout << "Error: bad number arguments!" << std::endl;
        return 0;
    }

    std::string s1 = argv[2];

    if (s1.empty()) {
        std::cout << "Error: first string empty!" << std::endl;
        return 0;
    }

    s1 = argv[3];
    if (s1.empty()) {
        std::cout << "Error: second string empty!" << std::endl;
        return 0;
    }

    std::ifstream in;
    std::ofstream out;

    in.open(argv[1], std::ios::in);
    if (!in.is_open()) {
        std::cout << "Error: can't open " << argv[1] << "!" << std::endl;
        in.close();
        out.close();
        return 0;
    }

    out.open(createRaplaceName(argv[1]), std::ios::out);
    if (!out.is_open()) {
        std::cout << "Error: can't create replace file!" << std::endl;
        in.close();
        out.close();
        return 0;
    }

    while (!in.eof()) {
        std::string str;
        getline(in, str);
        out << replaceString(str, argv[2], argv[3]) << std::endl;
    }

    in.close();
    out.close();

    return 0;
}

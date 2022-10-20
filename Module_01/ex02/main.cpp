/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:50:38 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 20:50:39 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main() {

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable:\t" << &str << std::endl;
    std::cout << "The memory address held by stringPTR:\t\t" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:\t\t" << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of the string variable:\t\t" << str << std::endl;
    std::cout << "The value pointed to by stringPTR:\t\t" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:\t\t" << stringREF << std::endl;

    str = "lol";

    std::cout << std::endl;

    std::cout << "The memory address of the string variable:\t" << &str << std::endl;
    std::cout << "The memory address held by stringPTR:\t\t" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:\t\t" << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of the string variable:\t\t" << str << std::endl;
    std::cout << "The value pointed to by stringPTR:\t\t" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:\t\t" << stringREF << std::endl;

    return 0;
}
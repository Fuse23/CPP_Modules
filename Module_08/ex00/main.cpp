#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> numbers;
    std::vector<int>::iterator iter;

    for (int i = 0; i < 10; i++)
        numbers.push_back(i);

    try {
        iter = easyfind(numbers, 3);
        std::cout << *iter << std::endl;
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        iter = easyfind(numbers, 10);
        std::cout << *iter << std::endl;
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

#include "PmergeMe.hpp"

int main(const int argc, const char *argv[]) {
    if (argc <= 1) {
        std::cout << "Error: no input sequence provided." << std::endl;
        return 1;
    }

    PmergeMe pmergeMe(argc, argv);
    (void) pmergeMe;

    return 0;
}
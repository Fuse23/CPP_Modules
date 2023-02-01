#include "iter.hpp"

int main() {

    int         array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string arrayString[] = {"lol", "kek", "pupa", "lupa"};

    iter(array, 9, print);
    iter(arrayString, 4, print);

    return 0;
}

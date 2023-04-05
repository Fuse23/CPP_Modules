#include "RPN.hpp"

int main(const int argc, const char *argv[]) {
    if (argc != 2) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    RPN rpn;
    rpn.calculate(argv[1]);

    return 0;
}

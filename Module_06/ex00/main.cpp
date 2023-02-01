#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

void    printDouble(int i, double d) {
    if (d - i == 0)
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void    printChar(char c, double d) {
    if (std::isnan(d) || std::isinf(d))
        std::cout << "char: impossible" << std::endl;	
    else if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void    printInt(int i, double d) {
    if (std::isnan(d) || std::isinf(d))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
}

void    printFloat(int i, float f) {
    if (f - i == 0)
        std::cout << "float: " << f << ".0f" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;	
}

int main(int argc, char *argv[]) {
    double  d = 0;
    float   f = 0;
    char    c = 0;
    int     i = 0;

    if (argc == 2) {
        d = std::strtod(argv[1], nullptr);
        f = static_cast<float>(d);
        c = static_cast<char>(d);
        i = static_cast<int>(d);

        printChar(c, d);
        printInt(i, d);
        printFloat(i, f);
        printDouble(i, d);

        return 0;
    }

    std::cerr << "Enter one arg!" << std::endl;

    return 1;
}

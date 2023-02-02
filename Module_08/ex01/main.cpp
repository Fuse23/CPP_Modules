#include "Span.hpp"

int main()
{
    try {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Span span(12000);
        std::vector<int> vector;

        for (int i = 0; i < 12000; i++)
            vector.push_back(i);

        span.addMore(vector.begin(), vector.end());
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

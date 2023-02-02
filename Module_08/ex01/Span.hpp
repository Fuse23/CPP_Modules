#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class Span {
private:
    std::vector<int>    _vector;
    unsigned int        _size;

public:
    Span();
    Span(unsigned int size);
    Span(const Span& copy);

    ~Span();

    Span& operator=(const Span& copy);

    void addNumber(int number);

    unsigned int shortestSpan();
    unsigned int longestSpan();

    void addMore(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif // __SPAN_HPP__

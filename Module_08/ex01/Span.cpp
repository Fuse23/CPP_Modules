#include "Span.hpp"

Span::Span() : _vector(0), _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span& copy) :_size(copy._size) {
    this->_vector.insert(this->_vector.end(), copy._vector.begin(), copy._vector.end());
}

Span::~Span() {}

Span& Span::operator=(const Span& copy) {
    if (this != &copy) {
        this->_size = copy._size;
        this->_vector = copy._vector;
    }

    return *this;
}

void Span::addNumber(int number) {
    if (this->_vector.size() < this->_size)
        this->_vector.push_back(number);
    else
        throw std::out_of_range("vector is full!");
}

unsigned int Span::shortestSpan() {
    if (this->_vector.size() < 2)
        throw std::runtime_error("vector has only one element!");

    std::vector<int> vector = this->_vector;
    std::sort(vector.begin(), vector.end());

    unsigned int result = abs(vector[1] - vector[0]);
    unsigned int different;

    for (size_t i = 1; i < vector.size() - 1; i++) {
        different = abs(vector[i + 1] - vector[i]);

        if (different < result)
            result = different;
    }

    return result;
}

unsigned int Span::longestSpan() {
    if (this->_vector.size() < 2)
        throw std::runtime_error("vector has only one element!");

    return *std::max_element(this->_vector.begin(), this->_vector.end()) -
            *std::min_element(this->_vector.begin(), this->_vector.end());
}

void Span::addMore(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    unsigned int dist = std::distance(begin, end);

    if (this->_vector.size() - this->_size < dist)
        throw std::out_of_range("vector is full!");
    else
        this->_vector.insert(this->_vector.end(), begin, end);
}

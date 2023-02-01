#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array {
private:
    T               *_pointer;
    unsigned int    _length;

public:
    Array();
    Array(unsigned int length);
    Array(const Array<T> & copy);

    ~Array();

    Array   &operator=(const Array<T> & copy);
    T   &operator[](unsigned int index);

    unsigned int size() const;
};

# include "Array.tpp"

#endif // __ARRAY_HPP__

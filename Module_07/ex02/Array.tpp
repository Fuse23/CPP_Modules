#ifndef __ARRAY_TPP__
# define __ARRAY_TPP__

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _pointer(new T()), _length(0) {}

template <typename T>
Array<T>::Array(unsigned int length) : _pointer(new T[length]), _length(length) {}

template <typename T>
Array<T>::Array(const Array<T> & copy) : _pointer(new T[copy._length]), _length(copy._length) {
    std::memcpy(this->_pointer, copy._pointer, sizeof(T) * this->_length);
}

template <typename T>
Array<T>&   Array<T>::operator=(const Array<T> & copy) {
    if (this != &copy) {
        delete[] this->_pointer;
        this->_length = copy._length;
        this->_pointer = new T[copy._length];
        std::memcpy(this->_pointer, copy._pointer, sizeof(T) * this->_length);
    }

    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete this->_pointer;
}

template <typename T>
T   &Array<T>::operator[](unsigned int index) {
    if (index >= this->_length)
        throw std::exception();
    
    return this->_pointer[index];
}

template <typename T>
unsigned int    Array<T>::size() const {
    return this->_length;
}

#endif // __ARRAY_TPP__

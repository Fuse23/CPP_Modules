#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy) {
    if (this != &copy)
        this->c = copy.c;

    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
    return this->c.cbegin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
    return this->c.cend();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}

#endif // __MUTANTSTACK_TPP__
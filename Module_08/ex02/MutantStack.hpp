#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    MutantStack();
    MutantStack(const MutantStack<T>& copy);
    ~MutantStack();

    MutantStack<T>& operator=(const MutantStack<T>& other);

    iterator begin();
    iterator end();
    const_iterator cbegin() const;
    const_iterator cend() const;

    reverse_iterator rbegin();
    reverse_iterator rend() ;
};

# include "MutantStack.tpp"

#endif // __MUTANTSTACK_HPP__

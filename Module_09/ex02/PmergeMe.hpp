#ifndef __PMERGEME_HPP__
# define __PMERGEME_HPP__

# include <iostream>
# include <string>
# include <ctime>
# include <deque>
# include <list>
# include <iomanip>

class PmergeMe {
public:
    PmergeMe(const int argc, const char *argv[]);
    ~PmergeMe();

    template <typename T>
    void displayContainer(const T& container);

    template <typename T>
    void mergeInsert(T& array);
};

#endif // __PMERGEME_HPP__

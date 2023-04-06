#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const int argc, const char *argv[]) {
    std::deque<int> inputDeque;
    std::list<int> inputList;

    std::srand(time(NULL));

    for (int i = 1; i < argc; i++) {
        int value = std::atoi(argv[i]);

        if (value <= 0) {
            std::cout << "Error: bad input: " << argv[i] << std::endl;
            exit(-1);
        }

        inputDeque.push_back(value);
        inputList.push_back(value);
    }

    std::cout << "Before: ";
    displayContainer(inputDeque);

    clock_t startDeque = clock();
    mergeInsert(inputDeque);
    clock_t endDeque = clock();
    double timeDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000000;

    clock_t startList = clock();
    mergeInsert(inputList);
    clock_t endList = clock();
    double timeList = static_cast<double>(endList - startList) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    displayContainer(inputDeque);
    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque : "
            << std::fixed << std::setprecision(5) << timeDeque << " us" << std::endl;
    std::cout << "Time to process a range of " << inputList.size() << " elements with std::list : "
            << std::fixed << std::setprecision(5) << timeList << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}

template <typename T>
void PmergeMe::displayContainer(const T& container) {
    typename T::const_iterator it;

    for (it = container.begin(); it != container.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename T>
void PmergeMe::mergeInsert(T& array) {
    typename T::iterator it, iter;

    for (it = ++array.begin(); it != array.end(); it++) {
        int tmp = *it;
        iter = it;

        while (iter != array.begin() && *(std::prev(iter)) > tmp) {
            *iter = *(std::prev(iter));
            std::advance(iter, -1);
        }

        *iter = tmp;
    }
}

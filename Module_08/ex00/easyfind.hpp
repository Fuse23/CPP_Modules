#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iterator>

template <typename T>
typename T::iterator easyfind(T & t, int item) {
    typename T::iterator iter = std::find(t.begin(), t.end(), item);

    if (iter != t.end())
        return iter;
    else
        throw std::runtime_error("not found!");
}

#endif // __EASYFIND_HPP__

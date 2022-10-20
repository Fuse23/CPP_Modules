/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyString.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:04:56 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 21:11:01 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSTRING_HPP
# define MYSTRING_HPP

#include <string>

class MyString
{
private:
    std::string _string;

public:
    MyString(std::string &s);
    ~MyString();
    std::string &getString();
    void    replace(std::string s1, std::string s2);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:11:08 by falarm            #+#    #+#             */
/*   Updated: 2022/10/20 21:42:39 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyString.hpp"

MyString::MyString(std::string &s) {
    _string = s;
}

MyString::~MyString() {

}

std::string &MyString::getString() {
    return _string;
}

void    MyString::replace(std::string search, std::string replace) {

    for (int i = 0; i < _string.length(); i++) {
        if (_string.find(search, i))
    }
}

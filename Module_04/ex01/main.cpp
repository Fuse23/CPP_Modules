/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:13:43 by falarm            #+#    #+#             */
/*   Updated: 2022/11/26 22:01:28 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {

    std::cout <<"---------Create one Dog---------"  << std::endl;
    const Animal* j = new Dog();
    std::cout  << "---------Create one Cat---------"  << std::endl;
    const Animal* i = new Cat();
    std::cout  << "---------Create copy Cat---------"   << std::endl;
    const Animal* copy_i = new Cat(*(Cat*)i); // создание копии кота

    std::cout << std::endl  << "---------Delete copy Cat!--------"  << std::endl;
    delete copy_i;
    std::cout  << "---------Delete Dog!------------"  << std::endl;
    delete j; //should not create a leak
    std::cout  << "---------Delete Cat!------------"  << std::endl << std::endl;
    delete i;

    return 0;
}

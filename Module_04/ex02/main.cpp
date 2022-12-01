/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:13:43 by falarm            #+#    #+#             */
/*   Updated: 2022/11/30 22:54:57 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {

    std::cout << "---------Create one Dog---------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "---------Create one Cat---------" << std::endl;
    const Animal* i = new Cat();
    std::cout << "---------Create copy Cat---------" << std::endl;
    const Animal* copy_i = new Cat(*(Cat*)i); // создание копии кота
    // std::cout << "---------Create one Animal---------" << std::endl;
    // const Animal* animal = new Animal();
    
    std::cout << std::endl;

    std::cout << "---------Make sound Dog---------" << std::endl;
    j->makeSound();
    std::cout << "---------Make sound Cat---------" << std::endl;
    i->makeSound();
    // std::cout << "---------Make sound Animal---------" << std::endl;
    // animal->makeSound();

    std::cout << std::endl;

    std::cout << "---------Delete copy Cat!--------" << std::endl;
    delete copy_i;
    std::cout << "---------Delete Dog!------------" << std::endl;
    delete j;
    std::cout << "---------Delete Cat!------------" << std::endl;
    delete i;

    return 0;
}

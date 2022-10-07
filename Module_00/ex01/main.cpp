#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   phoneBook;
    std::string input;

    std::cout << "Available cmd: ADD, SEARCH, EXIT." << std::endl;
    // std::cout << "Available cmd: ADD, SEARCH, EXIT, PRINT." << std::endl; //test

    while (1)
    {
        std::cin >> input;
        if (input == "ADD")
            phoneBook.addContact();
        else if (input == "SEARCH")
            phoneBook.printContact(phoneBook.searchContact());
        else if (input == "PRINT") //test
            phoneBook.printPhoneBook();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Bad input, please try again" << std::endl;
    }

    return 0;
}


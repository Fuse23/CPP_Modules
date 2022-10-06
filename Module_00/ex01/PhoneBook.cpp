#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){index = 0;}
PhoneBook::~PhoneBook(){}

void    PhoneBook::addContact()
{
    contacts[index].createContact();
    index++;
    if (index == 8)
        index = 0;
}

int PhoneBook::searchContact()
{
    std::string input;
    std::cout << "Enter nickname or first name: ";
    std::cin >> input;
    for (int i = 0; i < 8; i++)
        if (contacts[i].getNickname() == input or contacts[i].getFirstName() == input)
            return i;

    return -1;
}

void    PhoneBook::printW10(std::string &s)
{
    if (s.length() > 10)
        std::cout << s.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << s << "|";
}

void    PhoneBook::printContact(int i)
{
    if (i == -1)
    {
        std::cout << "No such contact was found" << std::endl;
        return ;
    }
    std::cout << "+-------------------------------------------+" << std::endl;
    std::cout << "|" << std::setw(10) << i + 1;
    std::cout << "|";
    printW10(contacts[i].getFirstName());
    printW10(contacts[i].getLastName());
    printW10(contacts[i].getNickname());
    std::cout << std::endl << "+-------------------------------------------+" << std::endl;
}

std::string &convertToString(const char *s)
{
    std::string ss = "";

    if (s)
        while (*s)
            ss += *s++;
    
    return ss;
}

void    PhoneBook::printPhoneBook()
{
    std::cout << "+-----------------------------------------------------------------+" << std::endl;
    std::cout << "|";
    printW10(convertToString("Index"));
    printW10(convertToString("First name"));
    printW10(convertToString("Last name"));
    printW10(convertToString("Nickname"));
    printW10(convertToString("Phone number"));
    printW10(convertToString("Darkest secret"));
    std::cout << std::endl << "+-----------------------------------------------------------------+" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i + 1;
        std::cout << "|";
        printW10(contacts[i].getFirstName());
        printW10(contacts[i].getLastName());
        printW10(contacts[i].getNickname());
        printW10(contacts[i].getPhoneNumber());
        printW10(contacts[i].getDarkestSecret());
        std::cout << std::endl << "+-----------------------------------------------------------------+" << std::endl;
    }
}

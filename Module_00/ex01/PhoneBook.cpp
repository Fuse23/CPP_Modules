#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){index = 0;}
PhoneBook::~PhoneBook(){}

bool    checkEmpty(Contact _contact)
{
    if (_contact.getFirstName().empty())
        return true;
    else if (_contact.getLastName().empty())
        return true;
    else if (_contact.getNickname().empty())
        return true;
    else if (_contact.getPhoneNumber().empty())
        return true;
    else if (_contact.getDarkestSecret().empty())
        return true;

    return false;
}

void    PhoneBook::addContact()
{
    Contact _contact;

    _contact.createContact();
    if (!checkEmpty(_contact))
    {
        contacts[index] = _contact;
        index++;
        if (index == 8)
            index = 0;
    }
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

std::string &convertToString(const char *s, std::string &ss)
{
    ss = "";

    if (s)
        while (*s)
            ss += *s++;
    
    return ss;
}

void    PhoneBook::printPhoneBook()
{
    std::cout << "+-----------------------------------------------------------------+" << std::endl;
    std::cout << "|";
    std::string ss;
    printW10(convertToString("Index", ss));
    printW10(convertToString("First name", ss));
    printW10(convertToString("Last name", ss));
    printW10(convertToString("Nickname", ss));
    printW10(convertToString("Phone number", ss));
    printW10(convertToString("Darkest secret", ss));
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

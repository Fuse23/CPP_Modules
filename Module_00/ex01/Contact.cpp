#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string &Contact::getFirstName() { return first_name; }
std::string &Contact::getLastName() { return last_name; }
std::string &Contact::getNickname() { return nickname; }
std::string &Contact::getPhoneNumber() { return phone_number; }
std::string &Contact::getDarkestSecret() { return darkest_secret; }

Contact &Contact::createContact()
{
    std::cout << "Enter first name: ";
    std::cin >> first_name;
    std::cout << "Enter last name: ";
    std::cin >> last_name;
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;

    return *this;
}

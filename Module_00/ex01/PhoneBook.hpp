#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
private:
    int     index;
    Contact contacts[8];

    void    printW10(std::string &s);

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact();
    int     searchContact();
    void    printContact(int i);
    void    printPhoneBook();
};


#endif

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string.h>
# include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    ~Contact();
    void        createContact();
    std::string &getFirstName();
    std::string &getLastName();
    std::string &getNickname();
    std::string &getPhoneNumber();
    std::string &getDarkestSecret();
};

#endif

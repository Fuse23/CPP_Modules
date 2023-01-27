#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
private:
    AForm*  presidentialPardonForm(std::string target);
    AForm*  robotomyRequestForm(std::string target);
    AForm*  shrubberyCreationForm(std::string target);

public:
    Intern();
    Intern(const Intern & copy);

    Intern  &operator=(const Intern & copy);

    ~Intern();

    AForm   *makeForm(std::string name, std::string target);
};

#endif // __INTERN_HPP__

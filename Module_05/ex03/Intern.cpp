#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern & copy) { *this = copy; }

Intern  &Intern::operator=(const Intern & copy) {
    (void) copy;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destructed" << std::endl;
}

AForm   *Intern::presidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm   *Intern::robotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm   *Intern::shrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm   *Intern::makeForm(std::string name, std::string target) {
    std::string forms[] = {
        "president pardon",
        "robotomy request",
        "shrubbery creation"
    };

    AForm   *(Intern::*function[])(std::string target) = {
        &Intern::presidentialPardonForm,
        &Intern::robotomyRequestForm,
        &Intern::shrubberyCreationForm
    };

    for (int i = 0; i < 3; i++) {
        if (name == forms[i])
            return (this->*function[i])(target);
    }

    std::cout << "Intern cannot create form " << name << std::endl;

    return nullptr;
}

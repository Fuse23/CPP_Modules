#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat  bureaucrat("Vova", 30);
    Intern      intern;
    
    AForm       *forms[] = {
        intern.makeForm("president pardon", "lol"),
        intern.makeForm("robotomy request", "kek"),
        intern.makeForm("shrubbery creation", "biba"),
    };

    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
        std::cout << *forms[i] << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 3; i++){
        bureaucrat.signForm(*forms[i]);

        try {
            forms[i]->execute(bureaucrat);
        } catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++)
        delete forms[i];

    return 0;
}
